using System;
using System.Linq;

public class Solution
{
    public int[] solution(int[] numlist, int n)
    {
        return numlist.OrderBy(x => (int)Math.Abs(x - n)).ThenByDescending(x => x).ToArray();
    }
}