#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    /*
    string answer = "";

    if (num % 2 == 0)
        answer = "Even";
    else
        answer = "Odd";

    return answer;
    */

    return num & 1 ? "Odd" : "Even";
}

int main()
{
    int n = 0;
}