#include <iostream>
using namespace std;

//https://www.acmicpc.net/problem/1712

int BEP()
{
	int a, b, c;

	cin >> a >> b >> c;

	if (b >= c)
	{
		cout << -1;
		return 0;
	}

	cout << a/(c-b) + 1;

	return 0;
}