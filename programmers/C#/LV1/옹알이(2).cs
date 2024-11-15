using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(string[] babbling)
    {
        string[] patterns = { "aya", "ye", "woo", "ma" };
        int answer = 0;

        for (int i = 0; i < babbling.Length; i++)
        {
            string str = babbling[i];
            int n;

            for (int j=0; j<patterns.Length; j++)
            {
                str = str.Replace(patterns[j], j.ToString());
            }

            if(int.TryParse(str, out n))
            {
                answer += CheckContinuous(str); 
            }
        }

        return answer;
    }

    public int CheckContinuous(string str)
    {
        bool isContinuous = true;

        for (int i = 0; i < str.Length - 1; i++)
        {
            if (str[i].Equals(str[i + 1]))
            {
                isContinuous = false;
                break;
            }
        }

        return isContinuous ? 1 : 0;
    }
}