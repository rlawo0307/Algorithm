#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    for (int i = 2; i <= n; i++)
        if (n % i == 1)
            return i;
}

int main()
{
    int n = 12;
    cout << solution(n);
}