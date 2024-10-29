using System;

public class Solution
{
    public int solution(int[,] arr)
    {
        int len = arr.GetLength(0);

        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (arr[i, j] != arr[j, i])
                {
                    return 0;
                }    
            }
        }
        return 1;
    }
}