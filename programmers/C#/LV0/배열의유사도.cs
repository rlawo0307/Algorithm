using System;

public class Solution
{
    public int solution(string[] s1, string[] s2)
    {
        int answer = 0;

        foreach(string s in s1)
        {
            answer += Array.Exists(s2, x => x == s) == true ? 1 : 0;
        }
        return answer;
    }
}