using System;

public class Solution
{
    public int[] solution(int[] array)
    {
        int maxNum = -1;
        int idx = -1;

        for(int i=0; i<array.Length; i++)
        {
            if(maxNum < array[i])
            {
                maxNum = array[i];
                idx = i;
            }
        }

        return new int[] { maxNum, idx };
    }
}