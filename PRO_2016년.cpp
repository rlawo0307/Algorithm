#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    vector<string> day = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
    int sum = 0;

    for (int i = 1; i < a; i++)
    {
        if (i == 2)
            sum += 29;
        else if (i < 8)
            if (i % 2 == 0)
                sum += 30;
            else
                sum += 31;
        else
            if (i % 2 == 0)
                sum += 31;
            else
                sum += 30;
    }
    sum += b;
    sum %= 7;
    return day[sum];
}

int main()
{
    int a = 5;
    int b = 24;
    cout << solution(a, b);
}