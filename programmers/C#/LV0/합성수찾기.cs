using System;
using System.Linq;
using System.Collections.Generic;

public class Solution
{
    public int solution(int n)
    {
        int[] primes = new int[] { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
        int[] prime = primes.Where(x => x <= n / 2).ToArray();
        List<int> list = new List<int>();

        foreach(int num in prime)
        {
            int i = 2;

            while(num * i <= n)
            {
                if(!list.Contains(num * i))
                {
                    list.Add(num * i);
                }
                i++;
            }
        }

        return list.Count;
    }
}
