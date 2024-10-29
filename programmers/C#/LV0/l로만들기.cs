using System;

public class Solution
{
    public string solution(string myString)
    {
        string answer = "";

        foreach (char c in myString)
        {
            answer += (char)Math.Max(c, 'l');
        }
        return answer;
    }
}