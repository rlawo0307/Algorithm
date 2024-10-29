#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool IsNum(char c)
{
    if (!('0' <= c && c <= '9'))
        return true;
    return false;
}

bool solution(string s) {
    if (s.size() != 4 && s.size() != 6)
        return false;

    auto check = find_if(s.begin(), s.end(), IsNum);
    if (check != s.end())
        return false;
    return true;
}

// isdigit() : 숫자인지 판별하는 함수
int main()
{
    string s = "1345";

    cout << solution(s);
}