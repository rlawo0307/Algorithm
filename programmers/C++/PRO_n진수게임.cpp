/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string itob(int n, int num)
{
    string res = "";
    int tmp;

    if (num == 0)
        return "0";

    while (num > 0)
    {
        tmp = num % n;
        res += to_string(num % n);
        num /= n;
    }
    reverse(res.begin(), res.end());
    return res;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string tmp = " ";

    for (int i = 0; i < t*2; i++)
        tmp += itob(n, i);

    cout << tmp << endl;

    int i = 0;
    while (i < t)
        answer += tmp[m*i++ +p];
    return answer;
}

int main()
{
    int n = 16;
    int t = 16;
    int m = 2;
    int p = 1;

    cout << solution(n, t, m, p);
}
*/