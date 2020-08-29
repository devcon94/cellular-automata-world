using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct InvalidBehavior
    {

        public unsafe static void Step(NativeArray<Cell> cell, Cell* self)
        {

        }

        public static AutomatonState GetDefaultState()
        {
            return new AutomatonState()
            {
                Active = false,
                Alive = false,
                Consumable = false,
                Traversible = false
            };
        }
    }
}
