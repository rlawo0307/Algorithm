#include <string>
#include <vector>
#include <iostream>

using namespace std;

int Euclidean(int a, int b)
{
    int tmp;

    while (a % b != 0)
    {
        if (a % b != 0)
        {
            tmp = a % b;
            a = b;
            b = tmp;
        }
    }
    return b;
}

vector<int> solution(int n, int m) {
    vector<int> answer;

    int a = max(n, m);
    int b = min(n, m);

    answer.push_back(Euclidean(a, b));
    answer.push_back(a*b/answer.at(0));

    return answer;
}

int main()
{
    int n = 3;
    int m = 12;

    solution(n, m);
}