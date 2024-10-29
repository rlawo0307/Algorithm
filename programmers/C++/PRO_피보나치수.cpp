#include <string>
#include <vector>
#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 2) + fib(n - 1);
}

int solution(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        vector<int>arr;

        arr.push_back(0);
        arr.push_back(1);

        for (int i = 2; i <= n; i++)
            arr.push_back((arr[i - 2] + arr[i - 1])%1234567);
        return arr[n] % 1234567;
    }
}

int main()
{
    int n = 100000;
    cout << solution(n);
}