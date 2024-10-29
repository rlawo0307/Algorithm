#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int>&);


int main()
{
	
	int n, tmp;
	long long res;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	res = sum(v);
	cout << res << "\n";
	return 0;
}

long long sum(std::vector<int> &a)
{
	long long sum = 0;
	for (int i = 0; i < a.size(); i++)
		sum += a.at(i);
	return sum;
}