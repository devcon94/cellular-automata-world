using Unity.Burst;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using Random = Unity.Mathematics.Random;

namespace Devcon.CellularAutomata
{
    [BurstCompile(CompileSynchronously = true)]
    public struct FungusTest : IJobParallelFor
    {
        [NativeDisableParallelForRestriction]
        public NativeArray<Random> rand;

        [NativeDisableParallelForRestriction]
        public NativeArray<Cell> layer1;

        public int width;
        public void Execute(int i)
        {
            Random random = rand[i];

            float rnd = MathUtil.NextFloat(ref random);
            float4 color = new float4();
            float magnitude = 0f;

            AutomatonType type;
            AutomatonState state;

            if (rnd > 0.99999f)
            {
                Color randomColor = new Color(
                    0.25f + MathUtil.NextFloat(ref random) * 0.75f,
                    0.25f + MathUtil.NextFloat(ref random) * 0.75f,
                    0.25f + MathUtil.NextFloat(ref random) * 0.75f,
                    1f
                );

                color = float4.FromColor(randomColor);
                magnitude = MathUtil.NextFloat(ref random);
                type = AutomatonType.Fungus;
            }
            else if (rnd < 0.99999f && rnd > 0.15f)
            {
                type = AutomatonType.Air;
            }
            else if (rnd < 0.15f && rnd > 0.1f)
            {
                type = AutomatonType.Rock;
            }
            else
                type = AutomatonType.Food;

            state = AutomatonManager.GetDefaultState(type);

            if (type == AutomatonType.Fungus)
            {
                state.TypeIndex = i;
                state.BaseColor = color;
                state.Color = color;
                state.Magnitude = magnitude;
                state.Random = random;
            }

            layer1[i] = new Cell(i, state);
        }
    }
}
