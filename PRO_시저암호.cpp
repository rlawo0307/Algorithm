#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    char ori;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            ori = s[i];
            s[i] += n;
            if (isupper(ori) != isupper(s[i]) || islower(ori) != islower(s[i]))
            {
                if (!isupper(s[i]))
                    s[i] -= 26;
            }
        }
        answer += s[i];
    }
    return answer;
}

int main()
{
    string s = "a B z";
    int n = 4;

    solution(s, n);
}