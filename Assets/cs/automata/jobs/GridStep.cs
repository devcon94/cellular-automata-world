using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;

namespace Devcon.CellularAutomata
{
    [BurstCompile(CompileSynchronously = true)]
    public unsafe struct GridStep : IJobParallelFor
    {
        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer1;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer2;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer3;

        public WorldSettings worldSettings;

        public int offset;

        public int mode;

        public int stage;

        // Called once per element in the TransformAccessArray
        public unsafe void Execute(int i)
        {

            i += offset;

            AutomatonManager.Step(i, layer1, layer2, layer3, worldSettings, mode);
        }
    }
}
