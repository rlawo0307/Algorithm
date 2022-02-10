#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int min = *min_element(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] != min)
            answer.push_back(arr[i]);

    //if (answer.size() == 0)
    if (answer.empty())
        answer.push_back(-1);
    return answer;
}

int main()
{
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);

    solution(arr);
}