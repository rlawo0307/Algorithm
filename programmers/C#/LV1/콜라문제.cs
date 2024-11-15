using System;

public class Solution
{
    public int solution(int a, int b, int n)
    {
        int free = -1;
        int answer = 0;

        while(free != 0)
        {
            free = n / a * b;
            answer += free;
            n = free + n % a;
        }
        return answer;
    }
}
