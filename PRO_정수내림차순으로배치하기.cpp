#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(char a, char b)
{
    return a > b;
}

long long solution(long long n) {
    long long answer = 0;

    string tmp = to_string(n);
    //sort(tmp.begin(), tmp.end(), cmp);
    sort(tmp.begin(), tmp.end(), greater<char>());
    answer = stoll(tmp);

    return answer;
}

int main()
{
    int n = 118372;

    solution(n);
}