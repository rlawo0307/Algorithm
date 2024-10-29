#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            index = i+1;
        else
            if((i-index)%2 == 0)
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        answer.push_back(s[i]);
    }
    return answer;
}