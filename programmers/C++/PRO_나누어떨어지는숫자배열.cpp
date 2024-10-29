#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
        if (arr[i] % divisor == 0)
            answer.push_back(arr[i]);

    if (answer.size() != 0)
        sort(answer.begin(), answer.end());
    else
        answer.push_back(-1);

    //return answer.empty()? vector<int>(1,-1) : answer;

    return answer;
}

int main()
{
    vector<int> arr = { 3,2,6};
    int divisor = 10;

    solution(arr, divisor);
}