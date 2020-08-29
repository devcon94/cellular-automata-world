using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct PlainsBehavior
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
                Consumable = false,
                Traversible = false,
                Color = new float4(0.508f, 0.589f, 0.238f, 1f),
                BaseColor = new float4(0.508f, 0.589f, 0.238f, 1f),
            };
        }
    }
}
