#include <iostream>

// https://www.acmicpc.net/problem/10952

int sum()
{
	int a[100] = {0, };
	int b[100] = {0, };
	int i = 0;
	int k = 0;

	while (1)
	{
		std::cin >> a[i] >> b[i];

		if (a[i] == 0 && b[i] == 0) break;
		i++;
	}

	std::cout << a[k] + b[k];
	k++;

	while (i != k)
	{
		std::cout << "\n" << a[k] + b[k];
		k++;
	}

	return 0;

}