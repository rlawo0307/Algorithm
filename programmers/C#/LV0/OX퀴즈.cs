using System;
using System.Collections.Generic;

public class Solution
{
    public string[] solution(string[] quiz)
    {
        List<string> list = new List<string>();
        
        foreach(string str in quiz)
        {
            string[] op = str.Split(' ');
            int a = int.Parse(op[0]);
            int b = int.Parse(op[2]);

            if (op[1] == "+")
            {
                list.Add(a + b == int.Parse(op[4]) ? "O" : "X");
            }
            else
            {
                list.Add(a - b == int.Parse(op[4]) ? "O" : "X");
            }    
        }

        return list.ToArray();
    }
}