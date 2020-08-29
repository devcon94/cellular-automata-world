using System;
using System.Collections.Generic;
using System.Linq;

public static class EnumUtil
{
    public static IEnumerable<T> GetValues<T>()
    {
        return Enum.GetValues(typeof(T)).Cast<T>();
    }

    public static int GetCount<T>()
    {
        return Enum.GetNames(typeof(T)).Length;
    }

    public static List<T> GetValueList<T>()
    {
        List<T> EnumList = new List<T>();
        IEnumerable<T> EnumValues = GetValues<T>();
        foreach (T Value in EnumValues)
        {
            EnumList.Add(Value);
        }

        return EnumList;
    }
}

