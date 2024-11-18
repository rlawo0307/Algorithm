using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int solution(int number, int limit, int power)
    {
        List<int> list = new List<int>();

        for(int i=1; i<=number; i++)
        {
            int cnt = 0;

            for(int j=1; j<=Math.Sqrt(i); j++)
            {
                if(i % j == 0)
                {
                    cnt += Math.Sqrt(i) == i / j ? 1 : 2;
                }
            }
            list.Add(cnt > limit ? power : cnt);
        }

        return list.ToArray().Sum();
    }
}
