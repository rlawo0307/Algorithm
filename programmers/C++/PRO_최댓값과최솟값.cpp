#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string tmp;
    int start = 0;
    int res_min = 1000000;
    int res_max = -1000000;
    s += ' ';

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || i == s.size() - 1)
        {
            tmp = s.substr(start, i - start);
            res_min = min(res_min, stoi(tmp));
            res_max = max(res_max, stoi(tmp));
            start = i + 1;
        }
    }
    return to_string(res_min) + " " + to_string(res_max);
}

int main()
{
    string s = "1 2 3 4";

    cout << solution(s);
}