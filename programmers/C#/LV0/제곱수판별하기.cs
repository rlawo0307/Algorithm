using System;

public class Solution
{
    public int solution(int n)
    {
        return Math.Sqrt(n) % 1 == 0 ? 1 : 2;
    }
}