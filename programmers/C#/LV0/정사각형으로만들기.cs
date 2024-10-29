using System;

public class Solution
{
    public int[,] solution(int[,] arr)
    {
        int row = arr.GetLength(0);
        int col = arr.GetLength(1);
        int len = Math.Max(row, col);
        int[,] answer = new int[len, len];

        for (int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                answer[i, j] = arr[i, j];
            }
        }
        return answer;
    }
}