#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
    string str = "";
    int answer = 0;
    int tmp;

    int div = 1;
    while (div*3 <= n)
        div *= 3;

    while (div >= 1)
    {
        tmp = n / div;
        str += tmp + '0';
        n -= tmp * div;
        div /= 3;
    }
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " " << pow(2, i) << endl;
        answer += (str[i] - '0') * pow(3, i);
        cout << answer << endl;
    }
    return answer;
}

int main()
{
    int n = 45;

    cout << solution(n);
}