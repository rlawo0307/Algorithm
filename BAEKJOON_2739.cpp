#include <iostream>
using namespace std;

int main()
{
	//BAEKJOON_2739
	int n;

	cin >> n;

	for (int i = 1; i <= 9; i++)
		cout << n << " * " << i << " = " << n * i << "\n";
	
	//BAEKJOON_10950
	int t, a, b, i = 0;
	
	cin >> t;
	
	while (i++ < t)
	{
		cin >> a >> b;
		cout << a + b;
	}
	
	//BAEKJOON_8393
	int n, res = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
		res += i;
	cout << res;

	//BAEKJOON_2741
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
		cout << i << "\n";

	//BAEKJOON_2742
	int n;

	cin >> n;

	for (int i = n; i >= 1; i--)
		cout << i << "\n";

	//BAEKJOON_11021
	int t, a, b;

	cin >> t;
	
	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}

	//BAEKJOON_11022
	int t, a, b;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
	}

	//BAEKJOON_2438
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << "\n";
	}
	
	//BAEKJOON_2439
	int n;

	cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= n; j++)
			if (j < i) cout << " ";
			else cout << "*";
		cout << "\n";
	}

	//BAEKJOON_10871
	int n, x;
	int tmp[10000];

	cin >> n >> x;

	for (int i = 0; i < n; i++)
		cin >> tmp[i];

	for (int i = 0; i < n; i++)
		if (tmp[i] < x)
			cout << tmp[i] << " ";
	cout << "\r\n";

	return 0;
}