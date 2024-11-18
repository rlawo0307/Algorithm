using System;

public class Solution
{
    public string solution(string[] cards1, string[] cards2, string[] goal)
    {
        int idx1 = 0;
        int idx2 = 0;

        foreach(string str in goal)
        {
            if (idx1 < cards1.Length && str.Equals(cards1[idx1]))
            {
                idx1++;
            }
            else if (idx2 < cards2.Length && str.Equals(cards2[idx2]))
            {
                idx2++;
            }
            else
            {
                return "No";
            }
        }
        return "Yes";
    }
}