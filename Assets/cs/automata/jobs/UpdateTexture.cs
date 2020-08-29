using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;

namespace Devcon.CellularAutomata
{
    [BurstCompile(CompileSynchronously = true)]
    public struct GridUpdateTexture : IJobParallelFor
    {
        [NativeDisableParallelForRestriction]
        public NativeArray<float4> pixels;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> cells;

        // Called once per element in the TransformAccessArray
        public void Execute(int i)
        {
            pixels[i] = cells[i].GetState().Color;
        }
    }
}
