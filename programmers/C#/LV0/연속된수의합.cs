using System;
using System.Numerics;

public class Solution
{
    public int[] solution(int num, int total)
    {
        int[] answer = new int[num];

        if(num % 2 == 0)
        {
            int x = (total - (num * (num - 1) / 2)) / num;

            for(int i=0; i<num; i++)
            {
                answer[i] = x + i;
            }
        }
        else
        {
            int x = total / num;
            for (int i = 0; i < num; i++)
            {
                answer[i] = x - ((num - 1) / 2) + i;
            }
        }
        return answer;
    }
}
