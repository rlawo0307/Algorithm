#include <string>
#include <vector>
#include <numeric>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;

    answer = (double)accumulate(arr.begin(), arr.end(), 0) / arr.size();

    return answer;
}

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);

    solution(arr);
}