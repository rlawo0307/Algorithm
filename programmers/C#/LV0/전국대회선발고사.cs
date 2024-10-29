using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] rank, bool[] attendance)
    {
        List<(int rank, int idx)> list = new List<(int, int)>();

        for(int i=0; i<attendance.Length; i++)
        {
            if (attendance[i])
            {
                list.Add((rank[i], i));
            }
        }

        list.Sort();

        return 10000 * list[0].idx + 100 * list[1].idx + list[2].idx;
    }
}
