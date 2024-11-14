using System;

public class Solution
{
    public string solution(string bin1, string bin2)
    {
        int a = Convert.ToInt32(bin1, 2);
        int b = Convert.ToInt32(bin2, 2);
        return Convert.ToString(a + b, 2);
    }
}


