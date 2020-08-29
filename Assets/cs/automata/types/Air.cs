using Unity.Collections;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{
    public struct AirBehavior
    {

        private static readonly Vector2Int[] DIRECTIONS = new Vector2Int[] {
            new Vector2Int(1, 0),
            new Vector2Int(-1, 0),
            new Vector2Int(0, 1),
            new Vector2Int(0, -1),
            new Vector2Int(1, 1),
            new Vector2Int(-1, 1),
            new Vector2Int(-1, -1),
            new Vector2Int(1, -1),
        };

        public static unsafe void Step(NativeArray<Cell> cells, NativeArray<Cell> terrainMap, Cell* self, WorldSettings settings, int mode)
        {
            int index = self->GetIndex();

            Cell terrainCell = terrainMap[index];

            AutomatonState selfState = self->GetState();
            AutomatonState terrainState = terrainCell.GetState();


            float elevation = terrainState.Elevation;
            float blendFactor = settings[WorldSettingsEnum.BLEND_FACTOR];

            AutomatonType terrainType = terrainState.Type;

            CalculateAirCondition(cells, index, &selfState, blendFactor, terrainType, elevation, settings);

            float moisture = selfState.Generic3;
            float currentTemperature = selfState.Generic1;

            Random random = selfState.Random;

            // Precipitation / Evaporation
            if (moisture >= settings[WorldSettingsEnum.PRECIPITATION_THRESHOLD])
                moisture *= (settings[WorldSettingsEnum.PRECIPITATION_MULTIPLIER] - settings[WorldSettingsEnum.PRECIPITATION_RANDOMNESS] * random.NextFloat());


            float basePressure = CalculateBasePressure(elevation, currentTemperature, moisture, settings);
            float newPressure = Mathf.Lerp(selfState.Generic2, basePressure, blendFactor);

            //float baseMoisture = CalculateBaseMoisture(newPressure, currentTemperature, terrainType);
            //float newMoisture = Mathf.Lerp(selfState.Generic3, baseMoisture, blendFactor);

            float baseTemperature = CalculateBaseTemperature(moisture, newPressure);
            float newTemperature = Mathf.Lerp(selfState.Generic1, baseTemperature, blendFactor);

            UpdateConditions(&selfState, newTemperature, newPressure, moisture);

            //Debug.Log(moisture);
            float4 color = new float4(0, 0, 0, 0);

            switch (mode)
            {
                case 1:
                    color = float4.Lerp(new float4(0f, 0f, 0.5f, 0.9f), new float4(0.5f, 0f, 0f, 0.9f), newTemperature / WorldGenerationConfig.AIR_MAX_TEMPERATURE);
                    break;

                case 2:
                    color = float4.Lerp(new float4(1f, 1f, 1f, 0f), new float4(0.35f, 0.35f, 0.35f, 1f), moisture);
                    break;

                case 3:
                    color = float4.Lerp(new float4(0.4f, 0.4f, 0.6f, 0f), new float4(0.2f, 0.2f, 0.6f, 1f), newPressure);
                    break;
            }
            //selfState.Color = float4.Lerp(new float4(0.1f, 0.2f, 0.25f, 0.5f), new float4(0.5f, 0f, 0f, 0.5f), newTemperature / WorldGenerationConfig.AIR_MAX_TEMPERATURE);
            //if(moisture > 2f)
            selfState.Color = color;
            //selfState.Color = float4.Lerp(new float4(0.6f, 0.1f, 0.1f, 0.2f), new float4(0.1f, 0.1f, 0.6f, 0.5f), 1 - newPressure);

            self->SetState(selfState);
        }

        public unsafe static void UpdateConditions(AutomatonState* state, float temperature, float pressure, float moisture)
        {
            state->Generic1 = temperature;
            state->Generic2 = pressure;
            state->Generic3 = moisture;
        }

        public unsafe static bool BlendConditions(AutomatonState* a, AutomatonState* b, float blendFactor)
        {
            bool blended = false;

            float aOrig1 = a->Generic1;

            a->Generic1 = Mathf.Lerp(a->Generic1, b->Generic1, blendFactor);

            float aDiff1 = aOrig1 - a->Generic1;

            b->Generic1 += aDiff1;

            // Pressure only moves towards cold or less moist air
            if (a->Generic2 < b->Generic2 || a->Generic3 < b->Generic3)
            {
                float aOrig2 = a->Generic2;

                a->Generic2 = Mathf.Lerp(a->Generic2, b->Generic2, blendFactor);

                float aDiff2 = aOrig2 - a->Generic2;

                b->Generic2 += aDiff2;

                blended = true;
            }

            // Moisture moves in the direction of turbulent air
            if (a->Elevation > b->Elevation || a->Generic2 < b->Generic2)
            {
                float aOrig3 = a->Generic3;

                a->Generic3 = Mathf.Lerp(a->Generic3, b->Generic3, blendFactor);

                float aDiff3 = aOrig3 - a->Generic3;

                b->Generic3 += aDiff3;

                blended = true;
            }

            return blended;

            // Subtract the difference from b, so that moisture/pressure doesn't gradually increase in the system
        }


        public static float CalculateBaseMoisture(float pressure, float temperature, float elevation, AutomatonType terrainType, Random random)
        {
            // Lower pressure and proximity to water leads to higher atmospheric moisture

            float moisture = 0;

            if (terrainType == AutomatonType.Water || terrainType == AutomatonType.River)
                moisture += 0.25f;

            moisture += (WorldGenerationConfig.AIR_MAX_TEMPERATURE / temperature) * 0.25f;
            moisture += (elevation / WorldGenerationConfig.BASE_TERRAIN_ELEVATION_MAX) * 0.25f;
            moisture += Mathf.PerlinNoise(random.NextFloat(), random.NextFloat()) * 0.25f;

            return Mathf.Min(moisture, 1);
        }

        public static float CalculateBaseTemperature(float moisture, float pressure)
        {
            // Higher pressure and lower moisture leads to a higher temperature

            return WorldGenerationConfig.AIR_MAX_TEMPERATURE * pressure * 1 - moisture;
        }

        public static float CalculateBasePressure(float elevation, float temperature, float moisture, WorldSettings settings)
        {
            float temperatureFactor = temperature / WorldGenerationConfig.AIR_MAX_TEMPERATURE;
            float elevationFactor = settings[WorldSettingsEnum.ELEVATION_PRESSURE_FACTOR] * (elevation / WorldGenerationConfig.BASE_TERRAIN_ELEVATION_MAX);
            // Higher elevation leads to lower atmospheric pressure
            return Mathf.Clamp((1 - elevationFactor) + (temperatureFactor * settings[WorldSettingsEnum.TEMPERATURE_PRESSURE_FACTOR]) + (moisture * settings[WorldSettingsEnum.MOISTURE_PRESSURE_FACTOR]), 0, 1);
        }

        public unsafe static void CalculateAirCondition(NativeArray<Cell> cells, int index, AutomatonState* selfState, float blendFactor, AutomatonType terrainType, float elevation, WorldSettings settings)
        {
            Random random = selfState->Random;

            int length = DIRECTIONS.Length;
            int i = 0;

            while (i < length)
            {
                Vector2Int direction = DIRECTIONS[i];
                Cell adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);
                int adjacentIndex = adjacentCell.GetIndex();

                if (adjacentIndex == -1)
                {
                    ++i;
                    continue;
                }

                AutomatonState adjacentState = adjacentCell.GetState();

                bool blended = BlendConditions(selfState, &adjacentState, blendFactor);

                adjacentCell.SetState(adjacentState);

                if (adjacentState.Type != AutomatonType.AirSeed)
                    cells[adjacentIndex] = adjacentCell;

                // Moisture is only created over turbulent air, and evaporation increases as elevation increases
                if ((terrainType == AutomatonType.Water || terrainType == AutomatonType.River) && Mathf.Abs(selfState->Generic2 - adjacentState.Generic2) > settings[WorldSettingsEnum.EVAPORATION_PRESSURE_DIFFERENTIAL])
                    selfState->Generic3 += Mathf.Lerp(settings[WorldSettingsEnum.EVAPORATION_BASE_AMOUNT] * elevation, 0, selfState->Generic3);

                ++i;
            }

        }

        public static AutomatonState GetDefaultState()
        {

            return new AutomatonState()
            {
                Active = true,
                Alive = true,
                Consumable = true,
                Traversible = false
            };
        }
    }
}
