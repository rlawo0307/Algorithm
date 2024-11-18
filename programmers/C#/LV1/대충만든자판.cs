using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(string[] keymap, string[] targets)
    {
        Dictionary<char, int> dict = new Dictionary<char, int>();
        int[] answer = new int[targets.Length];

        for (int i=0; i< keymap.Length; i++)
        {
            for(int j =0; j < keymap[i].Length; j++)
            {
                char key = keymap[i][j];

                if (!dict.ContainsKey(key))
                {
                    dict.Add(key, j);
                }
                else
                {
                    dict[key] = Math.Min(dict[key], j);
                }
            }
        }

        for(int i=0; i<targets.Length; i++)
        {
            int cnt = 0;
            for (int j=0; j < targets[i].Length; j++)
            {
                if (dict.ContainsKey(targets[i][j]))
                {
                    cnt += dict[targets[i][j]] + 1;
                }
                else
                {
                    cnt = -1;
                    break;
                }
            }
            answer[i] = cnt;
        }
        return answer;
    }
}

