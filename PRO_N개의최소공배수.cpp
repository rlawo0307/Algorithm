#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int c = max(a, b);
    int d = min(a, b);
    int tmp = d;

    while (c % d != 0)
    {
        tmp = c;
        c = d;
        d = tmp % d;
    }
    return d;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = 1;
    queue<int> q;
    int tmp;

    for (int i = 0; i < arr.size(); i++)
        q.push(arr[i]);

    while (!q.empty())
    {
        answer = lcm(answer, q.front());
        q.pop();
    }
    return answer;
}

int main()
{
    vector<int>arr = { 1,2,3 };

    cout << solution(arr);
}