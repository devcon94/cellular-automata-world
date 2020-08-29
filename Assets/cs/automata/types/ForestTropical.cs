﻿using Unity.Collections;

namespace Devcon.CellularAutomata
{
    public struct ForestTropicalBehavior
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
                BaseColor = new float4(0.25f, 0.485f, 0.25f, 1f),
                Color = new float4(0.25f, 0.485f, 0.25f, 1f)
            };
        }
    }
}
