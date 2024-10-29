using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] arr)
    {
        List<int> list = new List<int>();
        
        for(int i = 0; i<arr.Length; i++)
        {
            if (list.Count == 0)
            {
                list.Add(arr[i]);
            }
            else
            {
                if (arr[i] == list.Last())
                {
                    list.RemoveAt(list.Count - 1);
                }
                else
                {
                    list.Add(arr[i]);
                }
            }
        }
        return list.Count == 0 ? new int[] { -1 } : list.ToArray();
    }
}