using System;
using System.Collections.Generic;

public class Solution
{
    public string[] solution(string my_str, int n)
    {
        List<string> list = new List<string>();
        int startIdx = 0;

        while(startIdx < my_str.Length)
        {
            string subStr = my_str.Substring(startIdx, Math.Min(n, my_str.Length - startIdx));
            list.Add(subStr);
            startIdx += n;
        }

        foreach(string str in list)
        {
            Console.WriteLine(str);
        }

        return list.ToArray();
    }
}