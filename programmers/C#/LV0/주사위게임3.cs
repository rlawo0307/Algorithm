using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int solution(int a, int b, int c, int d)
    {
        Dictionary<int, int> dict = new Dictionary<int, int>();
        int[] arr = { a, b, c, d };

        foreach (int num in arr)
        {
            if(dict.ContainsKey(num))
            {
                dict[num]++;
            }
            else
            {
                dict[num] = 1;
            }
        }

        List<KeyValuePair<int, int>> sortedDict = dict.OrderByDescending(x => x.Value).ToList();

        if (dict.Count == 1)
        {
            return 1111 * sortedDict[0].Key;
        }
        else if(dict.Count == 2)
        {
            int firstKey = sortedDict[0].Key;
            int secondKey = sortedDict[1].Key;

            if (sortedDict[0].Value == 3)
            {
                return (int)Math.Pow((double)(10 * firstKey + secondKey), (double)2);
            }
            else
            {
                return (firstKey + secondKey) * (Math.Abs(firstKey - secondKey));
            }
        }
        else if(dict.Count == 3)
        {
            return sortedDict[1].Key * sortedDict[2].Key;
        }
        else
        {
            return dict.Keys.Min();
        }
    }
}