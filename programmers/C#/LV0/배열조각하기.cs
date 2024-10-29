using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] arr, int[] query)
    {
        List<int> list = arr.ToList();

        for (int i=0; i<query.Length; i++)
        {
            if(i % 2 == 0)
            {
                int n = list.Count - query[i] - 1;
                for (int j = 0; j < n; j++)
                {
                    list.RemoveAt(list.Count - 1);
                }
            }
            else
            {
                for (int j = 0; j < query[i]; j++)
                {
                    list.RemoveAt(0);
                }
            }
        }
        return list.ToArray();
    }
}