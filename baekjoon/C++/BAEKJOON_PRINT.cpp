#include <iostream>
using namespace std;

int main()
{
	/*
	//BAEKJOON_2557
	cout << "Hello World!" << endl;

	//BAEKJOON_10718
	for (int i = 0; i < 2; i++)
		cout << "강한친구 대한육군" << endl;

	//BAEKJOON_10171
	cout << "\\    /\\" << endl;
	cout << " )  ( ')" << endl;
	cout << "(  /  )" << endl;
	cout << " \\(__)|" << endl;
	*/
	//BAEKJOON_10172
	char dog[5][20] = { "|\\_/|", "|q p|   /}", "( 0 )\"\"\"\\", "|\"^\"`    |", "||_/=\\\\__|" };

	for (int i = 0; i < 5; i++)
		cout << dog[i] << endl;
	return 0;
}