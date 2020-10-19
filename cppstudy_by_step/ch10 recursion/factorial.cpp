#include <iostream>
using namespace std;
// https://www.acmicpc.net/problem/10872

int multiple(int num)
{
	if (num == 1) return num;
	return multiple(num - 1) * num;
}

int factorial()
{
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 1;
		return 0;
	}
	n = multiple(n);

	cout << n;

	return 0;
}
