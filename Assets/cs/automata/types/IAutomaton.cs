using Unity.Collections;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{
    public struct AutomatonState
    {
        public AutomatonType Type { get; set; }
        public int TypeIndex { get; set; }
        public bool Active { get; set; }
        public bool Alive { get; set; }
        public bool Consumable { get; set; }
        public bool Traversible { get; set; }
        public float4 Color { get; set; }
        public float4 BaseColor { get; set; }
        public float Magnitude { get; set; }
        public float Elevation { get; set; }
        public float Generic1 { get; set; }
        public float Generic2 { get; set; }
        public float Generic3 { get; set; }
        public Random Random { get; set; }
        public int Wait { get; set; }
        public int LastCell { get; set; }
        public int Phase { get; set; }
    }
    public interface IAutomatonBehavior
    {
        void Step(NativeArray<Cell> cell, Cell self);
        AutomatonState GetDefaultState(float4 color, float magnitude, Random random);
    }
}
