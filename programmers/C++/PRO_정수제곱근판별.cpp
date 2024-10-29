#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    double tmp = sqrt(n);
    if ((tmp - int(tmp)) == 0)
        answer = pow(tmp + 1, 2);
    else
        answer = -1;

    return answer;
}

int main()
{
    int n = 120;
    solution(n);
}