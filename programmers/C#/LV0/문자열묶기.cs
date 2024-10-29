using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int solution(string[] strArr)
    {
        Dictionary<int, int> dict = new Dictionary<int, int>();

        foreach (string str in strArr)
        {
            int len = str.Length;

            if (dict.ContainsKey(len))
            {
                dict[len]++;
            }
            else
            {
                dict.Add(len, 1);
            }
        }
        return dict.Values.Max();
    }
}