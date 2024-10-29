#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int p_cnt = 0, y_cnt = 0;

    for (int i = 0; i < s.size(); i++)
        if (toupper(s[i]) == 'P')
            p_cnt++;
        else if (toupper(s[i]) == 'Y')
            y_cnt++;

    if (y_cnt == p_cnt)
        return true;
    return false;
}

int main()
{
    string s = "Pyy";

    cout << solution(s);
}