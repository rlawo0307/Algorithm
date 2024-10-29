#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

/*
int count(int n)
{
    int cnt;
    cnt = 0;
    while (n != 0) {
        cnt += n % 2;
        n /= 2;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int a = count(n);

    while (1)
        if (a == count(++n))
            return n;
}
*/

int solution(int n) {
    int a = bitset<20>(n).count();

    while (bitset<20>(++n).count() != a)
        ;
    return n;
}

int main()
{
    int n = 78;

    cout << solution(n);
}