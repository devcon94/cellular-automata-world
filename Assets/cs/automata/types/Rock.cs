using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct RockBehavior
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
                Color = new float4(0.35f, 0.35f, 0.35f, 1f),
                BaseColor = new float4(0.35f, 0.35f, 0.35f, 1f),
            };
        }
    }
}
