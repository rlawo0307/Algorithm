using System;
using System.Linq;

public class Solution
{
    public string solution(string myString, string pat)
    {
        string reverseStr = new string(myString.ToCharArray().Reverse().ToArray());
        string reversePat = new string(pat.ToCharArray().Reverse().ToArray());
        return myString.Substring(0, myString.Length - reverseStr.IndexOf(reversePat));
    }
}