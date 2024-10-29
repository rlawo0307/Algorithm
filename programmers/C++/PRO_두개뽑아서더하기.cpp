#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++)
        for (int j = i + 1; j < numbers.size(); j++)
            answer.push_back(numbers[i] + numbers[j]);
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;

    //set<int> : set은 중복허용하지 않음

}

int main()
{
    vector<int> numbers = { 5,0,2,7 };

    solution(numbers);
}