using System;

public class Solution
{
    public int solution(string str1, string str2)
    {
        int len = str1.Length;

        for(int i=0; i<=str2.Length- len; i++)
        {
            string subStr = str2.Substring(i, len);

            if(subStr.Equals(str1))
            {
                return 1;
            }

            Console.WriteLine(subStr);
        }
    }
}