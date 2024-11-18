﻿using System;

public class Solution
{
    public int solution(int n, int m, int[] section)
    {
        int answer = 0;
        int start = 0;

        for(int i=0; i<section.Length; i++)
        {
            if(start < section[i])
            {
                answer++;
                start = section[i] + m - 1;
            }
        }
        return answer;
    }
}