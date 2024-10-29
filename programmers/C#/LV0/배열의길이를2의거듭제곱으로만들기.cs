using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] arr)
    {
        List<int> list = arr.ToList();
        int power = 0;

        while((int)Math.Pow(2, power) < arr.Length)
        {
            power++;
        }

        int len = (int)Math.Pow(2, power);

        for(int i=0; i<len - arr.Length; i++)
        {
            list.Add(0);
        }
        return list.ToArray();
    }
}
