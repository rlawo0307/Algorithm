using System;

public class Solution
{
    public int solution(int[,] board, int k)
    {
        int answer = 0;

        for(int i = 0; i < board.GetLength(0); i++)
        {
            for(int j=0; j<=k-i; j++)
            {
                if(j < board.GetLength(1))
                {
                    answer += board[i, j];
                }
            }
        }
        return answer;
    }
}