using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct RiverBehavior
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
                BaseColor = new float4(0.35f, 0.35f, 0.9f, 1f),
                Color = new float4(0.35f, 0.35f, 0.9f, 1f)
            };
        }
    }
}
