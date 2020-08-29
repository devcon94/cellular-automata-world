using System;
using UnityEngine;

[Serializable]
public class SerializableVector3
{
    public float x;
    public float y;
    public float z;

    public SerializableVector3(Vector3 vector)
    {
        x = vector.x;
        y = vector.y;
        z = vector.z;
    }

    public Vector3 GetVector3()
    {
        return new Vector3(x, y, z);
    }
}

[Serializable]
public class SerializableVector2
{
    public float x;
    public float y;

    public SerializableVector2(Vector2 vector)
    {
        x = vector.x;
        y = vector.y;
    }

    public Vector2 GetVector2()
    {
        return new Vector2(x, y);
    }
}

[Serializable]
public class SerializableQuaternion
{
    public float x;
    public float y;
    public float z;
    public float w;

    public SerializableQuaternion(Quaternion quaternion)
    {
        w = quaternion.w;
        x = quaternion.x;
        y = quaternion.y;
        z = quaternion.z;
    }

    public Quaternion GetQuaternion()
    {
        return new Quaternion(x, y, z, w);
    }
}

[Serializable]
public class SerializableColor
{
    public float r;
    public float g;
    public float b;
    public float a;

    public SerializableColor(Color color)
    {
        r = color.r;
        g = color.g;
        b = color.b;
        a = color.a;
    }

    public Color GetColor()
    {
        return new Color(r, g, b, a);
    }
}

internal class DataUtil
{
    public static int ParseInt(string Value)
    {
        int Out;
        int.TryParse(Value, out Out);
        return Out;
    }

    public static float ParseFloat(string Value)
    {
        float Out;
        float.TryParse(Value, out Out);
        return Out;
    }

    public static bool ParseBool(string Value)
    {
        bool Out;
        bool.TryParse(Value, out Out);
        return Out;
    }
}

