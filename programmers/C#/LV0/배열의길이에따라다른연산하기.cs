using System;

public class Solution
{
    public int[] solution(int[] arr, int n)
    {
        int start = arr.Length % 2 == 0 ? 1 : 0;

        for (int i = start; i < arr.Length; i += 2)
        {
            arr[i] += n;
        }
        return arr;
    }
}