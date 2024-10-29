using System;
using System.Text.RegularExpressions;

public class Solution
{
    public int solution(string[] babbling)
    {
        string[] patterns = {"aya", "ye", "woo", "ma"};
        int answer = 0;

        for (int i=0; i<babbling.Length; i++)
        {
            string str = babbling[i];

            foreach (string pat in patterns)
            {
                str = str.Replace(pat, " ");
            }

            str = str.Replace(" ", "");

            if(str.Equals(""))
            {
                answer ++;
            }
        }
        return answer;
    }
}