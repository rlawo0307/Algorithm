#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(char a, char b)
{
    return a > b;
}

string solution(string s) {
    sort(s.begin(), s.end(), cmp);
    //sort(s.begin(), s.end(), greater<char>());
    return s;
}

int main()
{
    string s = "Zbcdefg";

    cout << solution(s);
}