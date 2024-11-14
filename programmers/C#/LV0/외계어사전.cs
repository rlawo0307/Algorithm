using System;
using System.Linq;

public class Solution
{
    public int solution(string[] spell, string[] dic)
    {
        foreach(string word in dic)
        {
            bool isExist = true;

            foreach (string alpha in spell)
            {
                char c = alpha[0];
                int cnt = word.Count(f => (f == c));

                if(cnt != 1)
                {
                    isExist = false;
                    break;
                }
            }

            if(isExist)
            {
                return 1;
            }
        }
        return 2;
    }
}