//#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            answer += i;
            if (i != n / i)
                answer += n / i;
        }
    return answer;
}

int main()
{
    solution(16);
}