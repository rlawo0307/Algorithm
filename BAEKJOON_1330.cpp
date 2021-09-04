#include <iostream>
using namespace std;

int main()
{
	//BAEKJOON_1330
	int a, b;

	cin >> a >> b;

	if (a > b) cout << ">";
	else if (a < b) cout << "<";
	else cout << "==";

	//BAEKJOON_9498
	int score;

	cin >> score;

	if (score >= 90) cout << "A";
	else if (score >= 80) cout << "B";
	else if (score >= 70) cout << "C";
	else if(score >=60) cout <<"D";
	else
		cout <<"F";

	//BAEKJOON_2753
	int year;

	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << 1;
	else
		cout << 0;

	//BAEKJOON_14681
	int x, y;

	cin >> x >> y;

	if (x < 0)
	{
		if (y < 0) cout << 3;
		else cout << 2;
	}
	else
	{
		if (y < 0) cout << 4;
		else cout << 1;
	}

	//BAEKJOON_2884
	int hour, min;

	cin >> hour >> min;
	
	min -= 45;
	if (min < 0)
	{
		hour--;
		min += 60;
	}
	if (hour < 0)
		hour += 24;

	cout << hour << " " << min;

	return 0;
}