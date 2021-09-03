#include <iostream>
using namespace std;

int main()
{
	//BAEKJOON_10171
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << " \\(__)|" << endl;

	//BAEKJOON_10172
	char dog[5][20] = { "|\\_/|", "|q p|   /}", "( 0 )\"\"\"\\", "|\"^\"`    |", "||_/=\\\\__|" };

	for (int i = 0; i < 5; i++)
		cout << dog[i] << endl;
	return 0;
}