#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    long long tmp = num;
    int answer = 0;

    while (tmp != 1)
    {
        if (tmp % 2 == 0)
            tmp /= 2;
        else
            tmp = tmp * 3 + 1;
        answer++;
        if (answer > 500)
            return -1;
    }

    return answer;
}

int main()
{
    int n[3] = { 6,16,626331 };

    for (int i = 0; i < 3; i++)
        cout << solution(n[i]) << endl;
}