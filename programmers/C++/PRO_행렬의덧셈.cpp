#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> tmp;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[0].size(); j++)
            tmp.push_back(arr1[i][j] + arr2[i][j]);
        answer.push_back(tmp);
        tmp.clear();
    }
    return answer;
}

int main()
{
    vector<vector<int>> v1 = { {1,2}, {2,3} };
    vector<vector<int>> v2 = { {3,4}, {5,6} };

    solution(v1, v2);
}