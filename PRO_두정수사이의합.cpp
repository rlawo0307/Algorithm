#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int c, d;

    c = min(a, b);
    d = max(a, b);

    for (int i = c; i <= d; i++)
        answer += i;

    return answer;
}

int main()
{
    int a = 3;
    int b = 3;

    cout << solution(a, b);
}