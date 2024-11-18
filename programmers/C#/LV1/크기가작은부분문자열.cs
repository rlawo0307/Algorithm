using System;

public class Solution
{
    public int solution(string t, string p)
    {
        int answer = 0;

        for(int i=0; i<=t.Length - p.Length; i++)
        {
            string subStr = t.Substring(i, p.Length);
            int j = 0;
            bool isSmall = subStr[j] <= p[j];

            while (j+1 < p.Length && subStr[j] == p[j])
            {
                j++;
                isSmall = subStr[j] <= p[j];
            }

            if(isSmall)
            {
                answer++;
            }
        }
        return answer;
    }
}
