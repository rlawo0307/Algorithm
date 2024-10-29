using System;
using System.Linq;

public class Solution
{
    public int solution(string myString, string pat)
    {
        return myString.Select((c, i) => new { Substring = myString.Substring(i), Index = i })
                       .Where(x => x.Substring.StartsWith(pat))
                       .Select(x => x.Index)
                       .ToList().Count;
    }
}