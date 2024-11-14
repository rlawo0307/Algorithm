using System;

public class Solution
{
    public int solution(int[,] board)
    {
        int col = board.GetLength(0);
        int row = board.GetLength(1);
        int answer = 0;

        for (int i=0; i<col; i++)
        {
            for(int j=0; j<row; j++)
            {
                if(board[i,j] == 1)
                {
                    for (int k=i-1; k<=i+1; k++)
                    {
                        for(int l=j-1; l<=j+1; l++)
                        {
                            if(k < 0 || k >= col || l < 0 || l >= row || board[k, l] != 0)
                            {
                                continue;
                            }
                            
                            board[k, l] = 2;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (board[i, j] == 0)
                {
                    answer++;
                }
            }
        }
        return answer;
    }
}