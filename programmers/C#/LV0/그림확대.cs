using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public string[] solution(string[] picture, int k)
    {
        List<string> list = new List<string>();

        foreach (string str in picture)
        {
            string newStr = "";

            foreach(char c in str)
            {
                newStr += new string(c, k);
            }

            list.AddRange(Enumerable.Repeat(newStr, k));
        }
        return list.ToArray();
    }
}