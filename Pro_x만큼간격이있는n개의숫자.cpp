#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    answer.push_back(x);
    for (int i = 0; i < n-1; i++)
        answer.push_back(answer.at(i) + x);
    return answer;
}

int main()
{
    int x[4] = { 2,4,-4 };
    int n[4] = { 5,3,2 };

    for (int i = 0; i < 3; i++)
        solution(x[i], n[i]);
}