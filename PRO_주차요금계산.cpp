/*
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string car_num;

bool find_car(vector<string> v)
{
    return v[1] == car_num ? true : false;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<int, vector<string>> m;
    int car_num;
    string time;

    for (int i = 0; i < records.size(); i++)
    {
        time = records[i].substr(0, 5);
        car_num = stoi(records[i].substr(6, 4));
        int idx = find_if(answer.begin(), answer.end(), find_car) - answer.begin();

        if (records[i][11] == 'I') // IN
        {
            vector<string> tmp;

            if (idx == answer.size())
            {
                tmp.push_back(time);
                m.
                m.insert(car_num, tmp);
                answer.push_back(tmp);
            else
                answer[idx][0] = tmp[0];
        }
        else // OUT
        {
            answer[idx][2] = to_string(stoi(answer[idx][2]) + (60 * stoi(tmp[0].substr(0, 2)) + stoi(tmp[0].substr(3, 2))) - (60 * stoi(answer[idx][0].substr(0, 2)) + stoi(answer[idx][0].substr(3, 2))));
            answer[idx][0] = "\0";
        }
    }

    for (int i = 0; i < answer.size(); i++)
        if (answer[i][0] != "\0")
            answer[i][2] = to_string(stoi(answer[i][2]) + (60*23+59 - (60 * stoi(answer[i][0].substr(0, 2)) + stoi(answer[i][0].substr(3, 2)))));

    for (int i = 0; i < answer.size(); i++)
        cout << answer[i][0] << "/" << answer[i][1] << "/" << answer[i][2] << "/" << endl;
     
    for (int i = 0; i < answer.size(); i++)
        if(stoi(answer[i][2]) >= fees[0])

    {
        answer[i][2] = stoi(answer[i][2]) / fees[0] 
        int tmp1 = stoi(answer[i][2]) / fees[0];
        int tmp2 = stoi(answer[i][2]) - fees[2] * tmp1;
        answer[i][3] = to_string(tmp + 
        + stoi(answer[i][2]-));
    return vector<int>(1, 0);
}

int main()
{
    vector<int> fees = { 180, 5000, 10, 600 };
    vector<string> records =
    { "05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT",
        "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN",
        "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT" };

    solution(fees, records);
}
*/