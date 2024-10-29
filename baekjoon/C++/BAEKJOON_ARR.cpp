#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	//BAEKJOON_10181
	int n, tmp;
	int min = 1000000, max = -1000000;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (min > tmp)
			min = tmp;
		if (max < tmp)
			max = tmp;
	}
	cout << min << " " << max << "\n";

	//BAEKJOON_2562
	int max = 0, index = -1, tmp;

	for (int i = 1; i <= 9; i++)
	{
		cin >> tmp;
		if (max < tmp)
		{
			max = tmp;
			index = i;
		}
	}
	cout << max << "\n" << index << "\n";

	//BAEKJOON_2577
	int cnt[10] = { 0, };
	int a, b, c, div=10;

	cin >> a >> b >> c;
	a *= b * c;

	while (a > 10)
	{
		cnt[a % div]++;
		a /= div;
	}
	cnt[a]++;
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << "\n";

	//BAEKJOON_3052
	int tmp, res = 0;
	int check[42] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		if (check[tmp % 42] == 0)
		{
			res++;
			check[tmp % 42] = 1;
		}
	}
	cout << res << "\n";

	//BAEKJOON_1546
	int n, max = 0;
	double sum = 0.0;
	int* arr = NULL;

	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < n; i++)
		sum += (double)arr[i] / max * 100;

	cout << sum / n << "\n";

	//BAEKJOON_8958
	int test, tmp, score;
	string str;

	cin >> test;
	cin.ignore();
	for (int i = 0; i < test; i++)
	{
		getline(cin, str);
		tmp = score = 0;
		for(int j=0; j<str.size(); j++)
		{
			if (str[j] == 'O')
				score += ++tmp;
			else
				tmp = 0;
		}
		cout << score << "\n";
	}
	*/
	//BAEKJOON_4344
	int test, n, sum, cnt;
	double avg;
	int* arr = NULL;

	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> n;
		arr = new int[n];
		sum = cnt = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		avg = (double)sum / n;
		for (int j = 0; j < n; j++)
			if (arr[j] > avg)
				cnt++;
		cout << fixed;
		cout.precision(3);
		cout << (double)cnt / n * 100 << "%\n";
	}
	return 0;
}