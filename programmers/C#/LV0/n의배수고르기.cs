using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int n, int[] numlist)
    {
        List<int> list = new List<int>();

        foreach(int num in numlist)
        {
            if(num % n == 0)
            {
                list.Add(num);
            }
        }

        return list.ToArray();
    }
}