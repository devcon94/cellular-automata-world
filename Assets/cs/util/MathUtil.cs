using System;
using UnityEngine;

using Random = System.Random;

public struct float4
{
    public static readonly float4 BLACK = new float4(0, 0, 0, 255);
    public float _x;
    public float _y;
    public float _z;
    public float _w;

    public float4(float x, float y, float z, float w)
    {
        _x = x;
        _y = y;
        _z = z;
        _w = w;
    }

    public static float4 Lerp(float4 a, float4 b, float t)
    {
        float x = a._x * (1 - t) + b._x * t;
        float y = a._y * (1 - t) + b._y * t;
        float z = a._z * (1 - t) + b._z * t;
        float w = a._w * (1 - t) + b._w * t;

        return new float4(x, y, z, w);
    }

    public static bool Similar(float4 a, float4 b, float comparator)
    {
        return Mathf.Abs(a._x - b._x) < comparator && Mathf.Abs(a._y - b._y) < comparator && Mathf.Abs(a._z - b._z) < comparator;
    }

    public static float4 FromColor(Color color)
    {
        return new float4(color.r, color.g, color.b, color.a);
    }

    public Color GetColor()
    {
        return new Color(_x, _y, _z, _w);
    }
}
internal class MathUtil
{
    public static int NearestPowerOf2(int value)
    {
        --value;
        value |= value >> 1;
        value |= value >> 2;
        value |= value >> 4;
        value |= value >> 8;
        value |= value >> 16;
        ++value;

        return value;
    }

    static float NextFloat(Random random)
    {
        double mantissa = (random.NextDouble() * 2.0) - 1.0;
        // choose -149 instead of -126 to also generate subnormal floats (*)
        double exponent = Math.Pow(2.0, random.Next(-126, 128));
        return (float)(mantissa * exponent);
    }

    public static float NextFloat(ref Unity.Mathematics.Random rand)
    {
        ++rand.state;

        return rand.NextFloat();
    }
}

