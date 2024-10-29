using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(string[] order)
    {
        Dictionary<string, int> dict = new Dictionary<string, int>
        {
            { "americano", 4500 },
            { "cafelatte", 5000 },
            { "anything", 4500 }
        };
        int answer = 0;

        foreach (string str in order)
        {
            int tempIdx = Math.Max(str.IndexOf("ice"), str.IndexOf("hot"));
            string menu = tempIdx == -1 ? str : str.Substring(0, tempIdx) + str.Substring(tempIdx + 3); ;
            answer += dict[menu];
        }
        return answer;
    }
}