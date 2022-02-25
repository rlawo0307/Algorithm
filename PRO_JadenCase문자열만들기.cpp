#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    bool start = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            start = true;
        else if (isalpha(s[i]) == 0)
            start = false;
        else
        {
            if (start == true)
                s[i] = towupper(s[i]);
            else
                s[i] = tolower(s[i]);
            start = false;
        }
    }
    return s;
}

int main()
{
    string str = "for the last week";

    cout << solution(str);
}