#include <iostream>
using namespace std;

int main()
{
	/*
	//BAEKJOON_10952
	int a = -1, b = -1;

	while (1)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		cout << a + b << "\n";
	}
	
	//BAEKJOON_10951
	//cin.eof() : 파일의 끝을 읽게되면 return true
	int a = -1, b = -1;

	while (1)
	{
		cin >> a >> b;
		if ((cin.eof() ==true) || (0 >=a || b >= 10))
			break;
		cout << a + b << "\n";
	}
	*/
	//BAEKJOON_1110
	int n, tmp, cycle = 0;
	
	cin >> n;
	tmp = n;
	do
	{
		tmp = (tmp % 10) * 10 + (tmp / 10 + tmp % 10) % 10;
		cycle++;
	} while (n != tmp);
	cout << cycle << "\n";

	return 0;
}