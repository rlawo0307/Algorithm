#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int left, int right) {
    int answer = 0;

    for (int i = left; i <= right; i++)
        if (sqrt(i) - (int)(sqrt(i)) == 0)
            answer -= i;
        else
            answer += i;
    return answer;
}

int main()
{
    int left = 24;
    int right = 27;

    cout << solution(left, right);
}