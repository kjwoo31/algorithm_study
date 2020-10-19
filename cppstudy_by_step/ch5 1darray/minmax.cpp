#include <iostream>

// https://www.acmicpc.net/problem/10818
using namespace std;

int minmax()
{
	int N;
	cin >> N;

	int a;
	int min = 0;
	int max = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (min == 0) min = a;
		if (max == 0) max = a;

		if (min > a) min = a;
		if (max < a) max = a;
	}

	cout << min << " " << max;

	return 0;
}