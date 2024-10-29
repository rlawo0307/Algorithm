/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<vector<int>> num = { {1,2,3,4,5}, {2,1,2,3,2,4,2,5 }, {3,3,1,1,2,2,4,4,5,5} };
    vector<int> answer = { 0,0,0 };

    for (int i = 0; i < answers.size(); i++)
        for (int j = 0; j < num.size(); j++)
            if (answers[i] == num[j][i % num[j].size()])
                answer[j]++;


}

int main()
{
    vector<int> answers = { 1,3,2,4,2 };

    solution(answers);
}
*/