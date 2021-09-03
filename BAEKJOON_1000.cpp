#include <iostream>
using namespace std;

int main()
{
	int a, b;

	//BAEKJOON_1000
	cin >> a >> b;
	cout << a + b << endl;

	//BAEKJOON_1001
	cin >> a >> b;
	cout << a - b << endl;

	//BAEKJOON_10998
	cin >> a >> b;
	cout << a * b << endl;

	//BAEKJOON_1008
	double c, d;

	cin >> c >> d;

	cout.precision(12);
	cout << fixed;
	cout << c / d << endl;

	//BAEKJOON_10869
	cin >> a >> b;
	cout << a + b << "\n" << a - b << "\n" << a * b << "\n" << a / b << "\n" << a % b << endl;
	

	//BAEKJOON_10430
	int A, B, C;

	cin >> A >> B >> C;
	cout << (A + B) % C << "\n" << ((A % C) + (B % C)) % C << "\n" << (A * B) % C << "\n" << ((A % C) * (B % C)) % C << endl;

	return 0;
}