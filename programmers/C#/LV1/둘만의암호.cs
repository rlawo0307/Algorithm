using System;
using System.Collections.Generic;

public class Solution
{
    public string solution(string s, string skip, int index)
    {
        List<char> list = new List<char>();
        string answer = "";

        for (int i=0; i<26; i++)
        {
            char c = (char)('a' + i);

            if(!skip.Contains(c))
            {
                list.Add((char)('a' + i));
            }
        }

        foreach (char c in s)
        {
            answer += list[(list.IndexOf(c) + index) % list.Count];
        }
        return answer;
    }
}