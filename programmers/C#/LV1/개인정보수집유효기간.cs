using System;
using System.Collections.Generic;
using System.Security.AccessControl;

public class Solution
{
    public int[] solution(string today, string[] terms, string[] privacies)
    {
        List<int> list = new List<int>();
        Dictionary<string, int> dict = new Dictionary<string, int>();

        foreach (string str in terms)
        {
            dict.Add(str.Substring(0, 1), int.Parse(str.Substring(2)));
        }

        for (int i = 0; i < privacies.Length; i++)
        {
            string str = privacies[i];
            int year = int.Parse(str.Substring(0, 4));
            int month = int.Parse(str.Substring(5, 2));
            int day = int.Parse(str.Substring(8, 2));
            string kind = str.Substring(11);

            int days = day + (month - 1 + dict[kind]) * 28 + (year - 1) * 28 * 12 - 1;
            year = days / (28 * 12);
            days -= 28 * 12 * year;
            year += 1;

            month = days / 28; // % (28 * 12);
            days -= 28 * month;
            month += 1;

            day = days;

            if(day == 0)
            {
                day = 28;
                month--;
            }
            if(month == 0)
            {
                month = 12;
                year--;
            }

            string due = year + "." + month.ToString().PadLeft(2, '0') + "." + day.ToString().PadLeft(2, '0');

            if (String.Compare(today, due) == 1)
            {
                list.Add(i + 1);
            }

        }
        return list.ToArray();
    }
}

