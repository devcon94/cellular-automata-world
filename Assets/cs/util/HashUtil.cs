using System;
using System.Linq;

internal class HashUtil
{
    private static readonly Random random = new Random();
    const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    public static string RandomString(int length)
    {
        return new string(Enumerable.Repeat(chars, length)
          .Select(s => s[random.Next(s.Length)]).ToArray());
    }

    public static float FromCoordinates(float X, float Y)
    {
        int Result = (int)(X * 1000);
        Result *= 0xabcdef | 1;
        Result += 0xfedcba;
        Result = (Result >> 32) + (Result << 32);
        Result ^= 0x800813;
        Result += (int)(Y * 1000);
        Result *= 0x318008 | 1;
        Result += 0x45555;
        Result = (Result >> 32) + (Result << 32);
        Result ^= 0x12345;
        Result *= 0x54321 | 1;

        return (float)(Result) / (float)int.MaxValue;
    }
}

