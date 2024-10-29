using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] arr, int[] delete_list)
    {
        List<int> list = arr.ToList();

        foreach (int num in delete_list)
        {
            int idx = list.FindIndex(x => x == num);
            if (idx != -1)
            {
                list.RemoveAt(idx);
            }
        }
        return list.ToArray();
    }
}