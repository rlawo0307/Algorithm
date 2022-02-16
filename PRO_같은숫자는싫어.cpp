#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int tmp = -1;

    if (arr.size() == 1)
        return arr;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (tmp != arr[i])
        {
            answer.push_back(arr[i]);
            tmp = arr[i];
        }
    }
    
    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
    cout << endl;

    return answer;

    //arr.erase(unique(arr.begin(), arr.end()), arr.end());
    //uniqeu() : 중복 값을 맨 뒤로 보냄
}

int main()
{
    vector<int> arr = { 4 };

    solution(arr);
}