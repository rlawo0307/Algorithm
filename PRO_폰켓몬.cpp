#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int n = nums.size() / 2;

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    return min(n, (int)nums.size());
}

int main()
{
    vector<int> nums = { 3,1,2,3 };

    cout << solution(nums);
}