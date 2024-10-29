using System;
using System.Net.Security;

public class Solution
{
    public int solution(string A, string B)
    {
        int answer = int.MaxValue;

        for (int i = A.Length; i >= 0; i--)
        {
            string newStr = A.Substring(i) + A.Substring(0, i);

            if (newStr.Equals(B))
            {
                answer = A.Length - i;
                break;
            }
        }

        return answer == int.MaxValue ? -1 : answer;
    }
}
