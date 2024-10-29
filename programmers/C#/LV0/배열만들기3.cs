using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] arr, int[,] intervals)
    {
        int[] subArray1 = arr.Skip(intervals[0, 0]).Take(intervals[0, 1] - intervals[0, 0] + 1).ToArray();
        int[] subArray2 = arr.Skip(intervals[1, 0]).Take(intervals[1, 1] - intervals[1, 0] + 1).ToArray();
        return subArray1.Concat(subArray2).ToArray();
    }
}