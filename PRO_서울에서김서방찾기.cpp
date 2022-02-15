#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "�輭���� ";
    answer += to_string(find(seoul.begin(), seoul.end(), "Kim") - seoul.begin());
    answer += "�� �ִ�";
    return answer;
}

int main()
{
    vector<string> seoul = { "Jane", "Kim" };

    cout << solution(seoul);
}