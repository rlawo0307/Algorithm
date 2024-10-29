using System;

public class Solution
{
    public int solution(int a, int b)
    {
        bool isAEven = a % 2 == 0;
        bool isBEven = b % 2 == 0;

        if(isAEven && isBEven)
        {
            return Math.Abs(a - b);
        }
        else if(isAEven || isBEven)
        {
            return 2 * (a + b);
        }
        else
        {
            return (int)Math.Pow(a, 2) + (int)Math.Pow(b, 2);
        }
    }
}