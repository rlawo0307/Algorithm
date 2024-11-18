using System;

public class Solution
{
    public int[] solution(string[] park, string[] routes)
    {
        int curX = -1;
        int curY = -1;

        for (int i = 0; i < park.Length; i++)
        {
            int index = park[i].IndexOf('S');

            if (index != -1)
            {
                curY = i;
                curX = index;
                break;
            }
        }

        foreach (string str in routes)
        {
            char dir = str[0];
            int len = int.Parse(str.Substring(2));
            int nextX = curX;
            int nextY = curY;
            bool isBlocked = false;

            switch (dir)
            {
                case 'N': nextY -= len; break;
                case 'S': nextY += len; break;
                case 'W': nextX -= len; break;
                case 'E': nextX += len; break;
            }

            if (nextX < 0 || nextX >= park[0].Length || nextY < 0 || nextY >= park.Length)
            {
                continue;
            }

            if (dir == 'N' || dir == 'S')
            {
                int startY = Math.Min(curY, nextY);
                int endY = Math.Max(curY, nextY);

                for (int i = startY; i<= endY; i++)
                {
                    if (park[i][curX] == 'X')
                    {
                        isBlocked = true;
                        break;
                    }
                }
            }
            else
            {
                int startX = Math.Min(curX, nextX);
                int endX = Math.Max(curX, nextX);

                for (int i = startX; i <= endX; i++)
                {
                    if (park[curY][i] == 'X')
                    {
                        isBlocked = true;
                        break;
                    }
                }
            }
            
            if(isBlocked)
            {
                continue;
            }

            curX = nextX;
            curY = nextY;
        }

        return new int[2] {curY, curX};
    }
}