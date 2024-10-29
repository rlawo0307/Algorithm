using System;

public class Solution
{
    public string solution(string n_str)
    {
        int i = -1;

        while (n_str[i+1] == '0')
        {
            i++;
        }

        return n_str.Substring(0, i);
        string answer = "";
        return answer;
    }
}