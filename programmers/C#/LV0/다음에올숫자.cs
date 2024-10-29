using System;
using System.Linq;

public class Solution
{
    public int solution(int[] common)
    {
        return common[2] - common[1] == common[1] - common[0] ?
               common.Last() + (common[2] - common[1]) :
               common.Last() * (common[2] / common[1]);
    }
}