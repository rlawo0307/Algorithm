#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    int n = s.size() / 2;
    return s.size() % 2 == 0 ? s.substr(n - 1, 2) : s.substr(n, 1);
}

int main()
{
    string s = "qwer";
    cout << solution(s);
}