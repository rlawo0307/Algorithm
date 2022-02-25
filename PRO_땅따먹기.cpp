#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > land)
{
    int max_sum;

    for (int i = 1; i < land.size(); i++)
        for (int j = 0; j < land[0].size(); j++)
        {
            max_sum = 0;
            for (int k = 0; k < land[0].size(); k++)
                if (land[i - 1][k] > max_sum && j != k)
                    max_sum = land[i - 1][k];
            land[i][j] += max_sum;
        }
    return *max_element(land[land.size() - 1].begin(), land[land.size() - 1].end());
}

int main()
{
    vector<vector<int>>arr = { {1,2,3,5},{5,6,7,8},{4,3,2,1} };
    
    cout << solution(arr);
}