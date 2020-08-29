using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct BeachBehavior
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
                BaseColor = new float4(1f, 0.97f, 0.85f, 1f),
                Color = new float4(1f, 0.97f, 0.85f, 1f)
            };
        }
    }
}
