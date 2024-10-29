#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<int> res(11,0);
int diff = 0;

void cal_score(vector<int> apeach_info, vector<int> ryan_info)
{
    int apeach_score = 0;
    int ryan_score = 0;
    int ar_diff;

    for (int i = 0; i < apeach_info.size(); i++)
        if (apeach_info[i] >= ryan_info[i])
        {
            if (apeach_info[i] != 0)
                apeach_score += 10 - i;
        }
        else
            ryan_score += 10 - i;

    ar_diff = ryan_score - apeach_score;

    if (apeach_score < ryan_score && diff < ar_diff)
    {
        res = ryan_info;
        diff = ar_diff;
    }
    else if (diff == ar_diff)
    {
        for (int i = 0; i < ryan_info.size(); i++)
            if (res[10 - i] < ryan_info[10 - i])
            {
                res = ryan_info;
                diff = ar_diff;
                break;
            }
            else if (res[10 - i] > ryan_info[10 - i])
                break;
            else
                continue;
    }
}

void find(vector<int> apeach_info, vector<int> ryan_info, int remain, int score)
{
    if (remain == 0 || 10-score == 0)
    {
        ryan_info[10] = remain;
        cal_score(apeach_info, ryan_info);
        ryan_info[10] -= remain;
        return;
    }

    if (apeach_info[score] < remain)
    {
        ryan_info[score] = apeach_info[score] + 1;
        find(apeach_info, ryan_info, remain - ryan_info[score], score + 1);
        ryan_info[score] -= apeach_info[score] + 1;
    }
    find(apeach_info, ryan_info, remain, score + 1);
}

vector<int> solution(int n, vector<int> info) {
    vector<int> ryan_info(11, 0);

    find(info, ryan_info, n, 0);

    if (diff == 0)
        return vector<int>(1, -1);
    else
        return res;
}

int main()
{
    int n = 10;
    vector<int> info = { 0,0,0,0,0,0,0,0,3,4,3 };
    vector<int> answer(11, 0);

    answer = solution(n, info);

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << " ";
    cout << endl;
}