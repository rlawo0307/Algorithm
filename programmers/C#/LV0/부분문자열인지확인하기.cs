using System;

public class Solution
{
    public int solution(string my_string, string target)
    {
        return my_string.Contains(target) == true ? 1 : 0;
    }
}