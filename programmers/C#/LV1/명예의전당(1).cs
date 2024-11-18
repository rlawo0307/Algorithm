using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int k, int[] score)
    {
        List<int> list = new List<int>();
        List<int> rank = new List<int>();

        for(int i=0; i<score.Length; i++)
        {
            if(i < k)
            {
                rank.Add(score[i]);
            }
            else
            {
                rank[0] = Math.Max(rank[0], score[i]);
            }
            rank.Sort();
            list.Add(rank[0]);
        }
        return list.ToArray();
    }
}
