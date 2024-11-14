using System;

public class Solution
{
    public int CalGCD(int n, int m)
    {
        if (m == 0)
            return n;
        else
            return CalGCD(m, n % m);
    }

    public int solution(int a, int b)
    {
        b /= CalGCD(a, b);

        while (b % 2 == 0)
        {
            b /= 2;
        }
        while(b % 5 == 0)
        {
            b /= 5;
        }

        return b == 1 ? 1 : 2;
    }
}