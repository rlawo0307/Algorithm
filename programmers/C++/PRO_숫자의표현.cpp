#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    vector<int>arr(n + 1, 1);
    int sum, tmp;

    for (int i = 1; i <= n; i++)
    {
        sum = tmp = i;
        while (sum < n)
        {
            sum += ++tmp;
            if (sum <= n)
                arr[sum]++;
        }
    }
    return arr[n];
}

int main()
{
    int n = 15;

    cout << solution(n);
}