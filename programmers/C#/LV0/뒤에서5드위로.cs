using System;

public class Solution
{
    public int[] solution(int[] num_list)
    {
        int len = num_list.Length - 5;
        int[] answer = new int[len];

        Array.Sort(num_list);
        Array.Copy(num_list, 5, answer, 0, len);
        return answer;
    }
}