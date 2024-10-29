#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = true;

    string tmp = to_string(x);
    int div = 0;
    for (int i = 0; i < tmp.size(); i++)
        div += tmp[i] - '0';
    if (x % div == 0)
        answer = true;
    else
        answer = false;

    return answer;
}

int main()
{
    int x[4] = { 10,12,11,13 };

    for (int i = 0; i < 4; i++)
        solution(x[i]);
}