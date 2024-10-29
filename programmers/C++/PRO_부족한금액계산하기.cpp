#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long total = 0;

    for (int i = 1; i<=count; i++)
        total += i;
    //가우스 공식 : 1~n까지의 합 : n(n+1)/2
    total *= price;
    return money - total >= 0 ? 0 : total - money;
}

int main()
{
    int price = 2500;
    int money = 2000;
    int count = 1;

    cout << solution(price, money, count);
}