using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public class AutomatonManager
    {

        public unsafe static void Step(int i, NativeArray<Cell> layer1, NativeArray<Cell> layer2, NativeArray<Cell> layer3, WorldSettings settings, int mode)
        {
            Cell layer1Cell = layer1[i];

            AutomatonState state = layer1Cell.GetState();
            AutomatonType type = state.Type;

            Cell* layer1CellPtr = &layer1Cell;

            switch (type)
            {

                case AutomatonType.Fungus:
                    FungusBehavior.Step(layer1, layer1CellPtr);
                    break;

                case AutomatonType.Terrain:
                    TerrainBehavior.Step(layer1, layer2, layer1CellPtr);
                    break;
            }

            layer1[i] = layer1Cell;

            Cell layer2Cell = layer2[i];

            state = layer2Cell.GetState();
            type = state.Type;

            Cell* layer2CellPtr = &layer2Cell;

            switch (type)
            {
                case AutomatonType.Air:
                    AirBehavior.Step(layer2, layer1, layer2CellPtr, settings, mode);
                    break;
            }

            layer2[i] = layer2Cell;
        }

        public static AutomatonState GetDefaultState(AutomatonType type)
        {
            AutomatonState state;

            switch (type)
            {
                case AutomatonType.Air:
                    state = AirBehavior.GetDefaultState();
                    break;

                case AutomatonType.Food:
                    state = FoodBehavior.GetDefaultState();
                    break;

                case AutomatonType.Fungus:
                    state = FungusBehavior.GetDefaultState();
                    break;

                case AutomatonType.Rock:
                    state = RockBehavior.GetDefaultState();
                    break;

                case AutomatonType.Beach:
                    state = BeachBehavior.GetDefaultState();
                    break;

                case AutomatonType.Water:
                    state = WaterBehavior.GetDefaultState();
                    break;

                case AutomatonType.River:
                    state = WaterBehavior.GetDefaultState();
                    break;

                case AutomatonType.Mountain:
                    state = MountainBehavior.GetDefaultState();
                    break;

                case AutomatonType.MountainTop:
                    state = MountainTopBehavior.GetDefaultState();
                    break;

                case AutomatonType.Terrain:
                    state = TerrainBehavior.GetDefaultState();
                    break;

                case AutomatonType.ForestBoreal:
                    state = ForestBorealBehavior.GetDefaultState();
                    break;

                case AutomatonType.ForestTropical:
                    state = ForestTropicalBehavior.GetDefaultState();
                    break;

                case AutomatonType.ForestTemperate:
                    state = ForestBehavior.GetDefaultState();
                    break;

                case AutomatonType.Plains:
                    state = PlainsBehavior.GetDefaultState();
                    break;

                default:
                    state = InvalidBehavior.GetDefaultState();
                    break;
            }

            state.Type = type;

            return state;
        }
    }
}
