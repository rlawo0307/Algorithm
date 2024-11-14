using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int n)
    {
        List<int> list = new List<int>();
        int num = 2;

        while(n > 1)
        {
            if(n % num == 0)
            {
                list.Add(num);

                while(n % num == 0)
                {
                    n /= num;
                }
            }
            num++;
        }
        return list.ToArray();
    }
}