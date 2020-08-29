using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct MountainBehavior
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
                Traversible = true,
                Color = new float4(0.55f, 0.55f, 0.55f, 1f),
                BaseColor = new float4(0.55f, 0.55f, 0.55f, 1f),
            };
        }
    }
}
