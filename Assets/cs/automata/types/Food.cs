using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct FoodBehavior
    {

        public unsafe static void Step(NativeArray<Cell> cell, Cell* self)
        {

        }

        public static AutomatonState GetDefaultState()
        {
            return new AutomatonState()
            {
                Active = true,
                Alive = false,
                Consumable = true,
                Traversible = false,
                Magnitude = 0f,
                Color = new float4(0.5f, 0.5f, 0.65f, 1f)
            };
        }
    }
}
