using System;
using System.Linq;

public class Solution
{
    public int solution(int[] arr1, int[] arr2)
    {
        if(arr1.Length != arr2.Length)
        {
            return arr1.Length > arr2.Length ? 1 : -1;
        }

        int sum1 = arr1.Sum();
        int sum2 = arr2.Sum();

        return sum1 == sum2 ? 0 : (sum1 > sum2 ? 1 : -1);
    }
}