#include <string>
#include <vector>
#include<iostream>

using namespace std;

string solution(string phone_number) {
    string answer = "";

    answer = phone_number;
    for (int i = 0; i < phone_number.size() - 4; i++)
        //answer.replace(i, 1, "*");
        answer[i] = '*';

    return answer;
}

int main()
{
    solution("01033334444");
}