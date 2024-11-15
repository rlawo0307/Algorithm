using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] ingredient)
    {
        List<int> list = new List<int>();
        int[] order = new int[4] { 1, 3, 2, 1 };
        int answer = 0;

        for (int i=0; i<ingredient.Length; i++)
        {
            list.Add(ingredient[i]);

            if (ingredient[i] == 1 && list.Count >= 4)
            {
                int idx = list.Count - 1;
                int cnt = 0;

                while(cnt < 4)
                {
                    if (list[idx] == order[cnt])
                    {
                        idx--;
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }

                if(cnt == 4)
                {
                    list.RemoveRange(list.Count - 4, 4);
                    answer++;
                }
            }
        }
        
        return answer;
    }
}