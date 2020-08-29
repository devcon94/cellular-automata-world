using Unity.Collections;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{

    public struct FungusBehavior
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

        public static unsafe void Step(NativeArray<Cell> cells, Cell* self)
        {
            int index = self->GetIndex();
            AutomatonState selfState = self->GetState();

            if (selfState.Wait > 0)
            {
                --selfState.Wait;

                self->SetState(selfState);
                return;
            }

            if (selfState.Alive)
            {
                if (!HungerStage(cells, self))
                    MoveStage(cells, self);
            }
        }

        private unsafe static bool HungerStage(NativeArray<Cell> cells, Cell* self)
        {
            int index = self->GetIndex();

            AutomatonState state = self->GetState();
            Random random = state.Random;

            Vector2Int direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            Cell adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanEat(adjacentCell, self))
            {
                Consume(adjacentCell, cells, self);
                return true;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanEat(adjacentCell, self))
            {
                Consume(adjacentCell, cells, self);
                return true;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanEat(adjacentCell, self))
            {
                Consume(adjacentCell, cells, self);
                return true;
            }

            AutomatonState selfState = self->GetState();

            selfState.Magnitude *= 0.985f;

            if (selfState.Magnitude < 0.75f)
            {
                selfState.TypeIndex = -1;
                selfState.Alive = false;
                selfState.Color = float4.Lerp(selfState.BaseColor, new float4(0, 0, 0, 1), 0.65f);
            }
            //else
            //selfState.Color = float4.Lerp(selfState.OrganismColor, new float4(0, 0, 0, 1), 0.75f / selfState.Magnitude);

            self->SetState(selfState);

            return false;
        }

        private unsafe static bool CanEat(Cell prey, Cell* self)
        {
            AutomatonState preyState = prey.GetState();
            AutomatonState selfState = self->GetState();

            if (prey.GetIndex() > -1 && preyState.Consumable && preyState.TypeIndex != selfState.TypeIndex && preyState.Magnitude < selfState.Magnitude)
                return true;

            return false;
        }

        private unsafe static bool CanMove(Cell target, Cell* self)
        {
            AutomatonState targetState = target.GetState();
            AutomatonState selfState = self->GetState();

            return targetState.Traversible && target.GetIndex() != selfState.LastCell;
        }

        public unsafe static void MoveStage(NativeArray<Cell> cells, Cell* self)
        {
            int index = self->GetIndex();

            AutomatonState state = self->GetState();
            Random random = state.Random;
            Vector2Int direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            Cell adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }

            direction = DIRECTIONS[(int)(random.NextFloat() * DIRECTIONS.Length)];
            adjacentCell = GridUtil.GetAdjacentCell(index, cells, direction);

            if (CanMove(adjacentCell, self))
            {
                Move(adjacentCell, cells, self);
                return;
            }
        }

        public unsafe static void Consume(Cell prey, NativeArray<Cell> cells, Cell* self)
        {
            //if (prey._alive)
            //prey._wait = 1;

            AutomatonState preyState = prey.GetState();
            AutomatonState selfState = self->GetState();

            int preyIndex = prey.GetIndex();

            preyState.Color = float4.Lerp(selfState.Color, selfState.BaseColor, 0.05f);
            preyState.TypeIndex = selfState.TypeIndex;
            preyState.BaseColor = selfState.BaseColor;
            preyState.Magnitude = selfState.Magnitude * 1.025f;
            preyState.Alive = true;
            preyState.Type = AutomatonType.Fungus;

            selfState.Magnitude = preyState.Magnitude * 1.0005f;

            self->SetState(selfState);

            GridUtil.UpdateCell(cells, preyIndex, preyState);
        }

        public unsafe static void Move(Cell target, NativeArray<Cell> cells, Cell* self)
        {
            int targetIndex = target.GetIndex();

            AutomatonState targetState = target.GetState();
            AutomatonState selfState = self->GetState();

            selfState.LastCell = self->GetIndex();
            selfState.Wait = 4;

            GridUtil.UpdateCell(cells, targetIndex, selfState);
            self->SetState(targetState);
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
