using Unity.Collections;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{

    public struct TerrainBehavior
    {

        private static readonly Vector2Int[] DIRECTIONS = new Vector2Int[] {
            new Vector2Int(1, 0),
            new Vector2Int(-1, 0),
            new Vector2Int(0, 1),
            new Vector2Int(0, -1)
        };

        public static unsafe void Step(NativeArray<Cell> cells, NativeArray<Cell> weatherMap, Cell* self)
        {

            int index = self->GetIndex();
            AutomatonState selfState = self->GetState();

            Random random = selfState.Random;

            float magnitude = selfState.Magnitude;

            if (magnitude < 1f && CheckConditions(weatherMap, self))
            {
                selfState.Magnitude = Mathf.Min(magnitude + 0.05f, 1f);
                self->SetState(selfState);
                return;
            }
            else
                selfState.Magnitude = Mathf.Max(magnitude - 0.05f, 0f);

            float prob = random.NextFloat();

            if (magnitude == 0f)
                ConvertSelf(cells, weatherMap, self);
            else
                self->SetState(selfState);
        }

        private static unsafe bool CheckConditions(NativeArray<Cell> weatherMap, Cell* self)
        {
            int index = self->GetIndex();
            Cell weatherCell = weatherMap[index];

            AutomatonState selfState = self->GetState();
            AutomatonState weatherState = weatherCell.GetState();

            AutomatonType currentClimate = selfState.Type;
            AutomatonType optimalClimate = GetOptimalClimate(selfState, weatherState);

            return currentClimate == optimalClimate;
        }

        public unsafe static AutomatonType GetOptimalClimate(AutomatonState selfState, AutomatonState weatherState)
        {
            float temperature = weatherState.Generic1;
            float pressure = weatherState.Generic2;
            float moisture = weatherState.Generic3;

            AutomatonType optimalClimate;

            float elevation = selfState.Elevation - WorldGenerationConfig.WATER_LEVEL;
            Random rand = selfState.Random;
            float prob = Mathf.PerlinNoise(rand.NextFloat(), rand.NextFloat());
            bool spread = prob < 0.5f;

            if (elevation < 0.275f)
                optimalClimate = AutomatonType.Beach;
            else if (elevation < 0.5f || spread && elevation < 1f)
                //optimalClimate = GetLowElevationClimate(temperature, pressure, moisture);
                optimalClimate = AutomatonType.Plains;
            else if (elevation < 1f || spread && elevation < 2.25f)
                //optimalClimate = GetLowElevationClimate(temperature, pressure, moisture);
                optimalClimate = AutomatonType.ForestTropical;
            else if (elevation < 2.75 || spread && elevation < 3.25f)
                optimalClimate = AutomatonType.ForestBoreal;
            else if (elevation < 4.25f || spread && elevation < 4.5f)
                //optimalClimate = (temperature, pressure, moisture);
                optimalClimate = AutomatonType.Mountain;
            else
                //optimalClimate = GetHighElevationClimate(temperature, pressure, moisture);
                optimalClimate = AutomatonType.MountainTop;

            return optimalClimate;
        }

        public unsafe static AutomatonType GetLowElevationClimate(float temperature, float moisture, float elevation)
        {
            return AutomatonType.ForestTemperate;
        }

        public unsafe static AutomatonType GetMidElevationClimate(float temperature, float moisture, float elevation)
        {
            return AutomatonType.ForestTropical;
        }

        public unsafe static AutomatonType GetHighElevationClimate(float temperature, float moisture, float elevation)
        {
            return AutomatonType.ForestBoreal;
        }

        private unsafe static void ConvertSelf(NativeArray<Cell> cells, NativeArray<Cell> weatherMap, Cell* self)
        {
            int index = self->GetIndex();

            Cell weatherCell = weatherMap[index];

            AutomatonState weatherState = weatherCell.GetState();

            float temperature = weatherState.Generic1;
            float pressure = weatherState.Generic2;
            float moisture = weatherState.Generic3;

            AutomatonState selfState = self->GetState();

            AutomatonType optimalClimate = GetOptimalClimate(selfState, weatherState);
            AutomatonState newState = AutomatonManager.GetDefaultState(optimalClimate);

            float elevation = selfState.Elevation;
            float lerpValue = elevation / WorldGenerationConfig.BASE_TERRAIN_ELEVATION_MAX;

            newState.Color = float4.Lerp(newState.BaseColor, new float4(0, 0, 0, 1), 1 - lerpValue);
            newState.Elevation = elevation;
            newState.Magnitude = 0.2f;

            self->SetState(newState);
        }

        private unsafe static void ConvertNearbyCell()
        {

        }

        private unsafe static Cell GetNearbyCell(NativeArray<Cell> cells, Cell* self)
        {
            int index = self->GetIndex();
            AutomatonState state = self->GetState();
            Random random = state.Random;

            Vector2Int direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            Cell adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            return adjacentCell;
        }


        /*
        public unsafe static void MoveStage(NativeArray<Cell> cells, Cell* self)
        {
            int index = self->GetIndex();

            AutomatonState state = self->GetState();
            Random random = state.Random;
            Vector2Int direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            Cell adjacentCell = AutomatonWorldGrid.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = AutomatonWorldGrid.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = AutomatonWorldGrid.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = AutomatonWorldGrid.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }
        }
        */


        public static AutomatonState GetDefaultState()
        {

            return new AutomatonState()
            {
                Active = true,
                Alive = true,
                Consumable = true,
                Traversible = false,
                Color = new float4(0.35f, 0.35f, 0.35f, 1f),
                BaseColor = new float4(0.35f, 0.35f, 0.35f, 1f),
            };
        }
    }
}
