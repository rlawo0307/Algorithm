using System;

public class Solution
{
    public int solution(int[] sides)
    {
        return 2 * Math.Min(sides[0], sides[1]) - 1;
    }
}