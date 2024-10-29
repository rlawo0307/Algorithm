using System;

public class Solution
{
    public int solution(string num_str)
    {
        char[] arr = num_str.ToArray();
        int answer = 0;

        foreach (char c in arr)
        {
            answer += c - '0';
        }
        return answer;
    }
}