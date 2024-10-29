#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++)
    {
        answer.push_back(vector<int>(arr2[0].size(), 0));
        for (int j = 0; j < arr2[0].size(); j++)
            for (int k = 0; k < arr1[0].size(); k++)
                answer[i][j] += arr1[i][k] * arr2[k][j];
    }

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[0].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    return answer;
}

int main()
{
    vector<vector<int>> arr1 = { {1,4}, {3,2}, {4,1} };
    vector<vector<int>> arr2 = { {3,3},{3,3} };

    solution(arr1, arr2);
}