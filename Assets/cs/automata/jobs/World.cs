using System;
using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{
    [BurstCompile(CompileSynchronously = true)]
    public static class WorldGenerationConfig
    {
        #region MOUNTAINS
        public static int MOUNTAIN_COUNT = 0;

        public const int MOUNTAIN_MAX = 3;
        public const int MOUNTAIN_ELEVATION_MIN = 50;
        public const int MOUNTAIN_ELEVATION_MAX = 100;
        public const int MOUNTAIN_SLOPE = 2;

        public const float MOUNTAIN_TEMP_PEAK_MIN = -25f;
        public const float MOUNTAIN_TEMP_PEAK_MAX = -5f;
        public const float MOUNTAIN_TEMP_SLOPE = 0.5f;

        #endregion

        #region BASE TERRAIN
        public const float BASE_TERRAIN_ELEVATION_MIN = 0f;
        public const float BASE_TERRAIN_ELEVATION_MAX = 15f;
        #endregion

        #region WEATHER
        public const float AIR_BLEND_FACTOR = 0.25f;
        public const float AIR_MIN_TEMPERATURE = 0f;
        public const float AIR_MAX_TEMPERATURE = 38f;
        #endregion

        #region WATER
        public const float WATER_LEVEL = 6f;
        #endregion

        public static readonly float MOUNTAIN_PROBABILITY = 0.0001f;

        public const AutomatonType BASE_TYPE = AutomatonType.Terrain;
    }

    public enum WorldSettingsEnum
    {
        EVAPORATION_PRESSURE_DIFFERENTIAL,
        EVAPORATION_BASE_AMOUNT,
        PRECIPITATION_THRESHOLD,
        PRECIPITATION_MULTIPLIER,
        PRECIPITATION_RANDOMNESS,
        BLEND_FACTOR,
        ELEVATION_PRESSURE_FACTOR,
        TEMPERATURE_PRESSURE_FACTOR,
        MOISTURE_PRESSURE_FACTOR,
        VAR_COUNT
    }


    [Serializable]
    public struct WorldSettings
    {
        public float[] values;

        public float this[int index] { get { return values[index]; } set { values[index] = value; } }
        public float this[WorldSettingsEnum type] { get { return values[(int)type]; } set { values[(int)type] = value; } }
    }

    [BurstCompile(CompileSynchronously = true)]
    public struct BaseWorldPass : IJobParallelFor
    {
        [NativeDisableParallelForRestriction]
        public NativeArray<Random> rand;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer1;

        public int terrainSeed;

        public float noiseX;
        public float noiseY;

        public void Execute(int i)
        {
            Random random = rand[i];

            int width = GridConstants.GRID_SIZE;
            int x = i % width;
            int y = width - (i / width);

            float fractal = 0f;
            float amplitude = 1f;

            float perlinX = (noiseX + x) * (1f / 256f);
            float perlinY = (noiseY + y) * (1f / 256f);

            for (int k = 0; k < 5; ++k)
            {
                fractal += (Mathf.PerlinNoise(perlinX, perlinY)) * 0.5f * amplitude;

                perlinX *= 2;
                perlinY *= 2;

                amplitude *= 0.5f;
            }

            //float res = Mathf.Sin((float)x * 0.005f);
            //res *= Mathf.Cos((float)y * 0.005f);


            float elevation = fractal * WorldGenerationConfig.BASE_TERRAIN_ELEVATION_MAX;
            float lerpValue = elevation / WorldGenerationConfig.BASE_TERRAIN_ELEVATION_MAX;

            AutomatonState state = AutomatonManager.GetDefaultState(WorldGenerationConfig.BASE_TYPE);

            state.Elevation = elevation;
            state.Random = random;

            state.Color = float4.Lerp(state.BaseColor, new float4(0, 0, 0, 1), 1 - lerpValue);

            layer1[i] = new Cell(i, state);

            /*if (WorldGenerationConfig.MOUNTAIN_COUNT < WorldGenerationConfig.MOUNTAIN_MAX && prob < WorldGenerationConfig.MOUNTAIN_PROBABILITY)
            {
                selectedType = AutomatonType.Mountain;

                ++WorldGenerationConfig.MOUNTAIN_COUNT;
                return;
            }*/
        }
    }

    [BurstCompile(CompileSynchronously = true)]
    public struct BaseWaterPass : IJobParallelFor
    {
        [NativeDisableParallelForRestriction]
        public NativeArray<Random> rand;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer1;

        public WorldSettings worldSettings;

        public void Execute(int i)
        {
            Random random = rand[i];
            Cell cell = layer1[i];
            AutomatonState state = cell.GetState();

            float elevation = state.Elevation;

            if (elevation > WorldGenerationConfig.WATER_LEVEL)
                return;

            float lerpValue = (1 - (elevation / WorldGenerationConfig.WATER_LEVEL)) * 0.5f;

            AutomatonState waterState = AutomatonManager.GetDefaultState(AutomatonType.Water);

            waterState.Elevation = elevation;
            waterState.Random = random;
            waterState.Color = float4.Lerp(waterState.BaseColor, new float4(0, 0, 0, 1), lerpValue);

            layer1[i] = new Cell(i, waterState);
            // Generate land of varied elevation with sparse mountains interspersed that will act as seeds for the terrain

            /*if (WorldGenerationConfig.MOUNTAIN_COUNT < WorldGenerationConfig.MOUNTAIN_MAX && prob < WorldGenerationConfig.MOUNTAIN_PROBABILITY)
            {
                selectedType = AutomatonType.Mountain;

                ++WorldGenerationConfig.MOUNTAIN_COUNT;
                return;
            }*/
        }
    }

    [BurstCompile(CompileSynchronously = true)]
    public struct BaseAirPass : IJobParallelFor
    {
        [NativeDisableParallelForRestriction]
        public NativeArray<Random> rand;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer1;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer2;

        private int phase;

        private WorldSettings worldSettings;

        public unsafe void Execute(int i)
        {
            Cell terrainCell = layer1[i];

            AutomatonState airState = AirBehavior.GetDefaultState();
            AutomatonState terrainState = terrainCell.GetState();

            float elevation = terrainState.Elevation;

            AutomatonType terrainType = terrainState.Type;

            float baseMoisture = 0.05f;
            float baseTemperature;
            float basePressure;
            AutomatonType type;

            Random random = rand[i];

            basePressure = AirBehavior.CalculateBasePressure(elevation, WorldGenerationConfig.AIR_MAX_TEMPERATURE / 2f, 0, worldSettings);

            float moistureChance = random.NextFloat();

            baseTemperature = AirBehavior.CalculateBaseTemperature(baseMoisture, basePressure);

            type = AutomatonType.Air;

            AirBehavior.UpdateConditions(&airState, baseTemperature, basePressure, baseMoisture);

            airState.Type = type;
            airState.Random = rand[i];
            airState.Elevation = elevation;

            ++phase;

            if (phase == 8)
                phase = 0;

            airState.Phase = phase;

            layer2[i] = new Cell(i, airState);
        }
    }

}
