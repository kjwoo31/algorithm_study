#include <iostream>

// https://www.acmicpc.net/problem/1110

int cycle()
{
	int N;
	int num;
	int a;
	int b;
	int i = 1;

	std::cin >> N;
	num = N;

	a = N / 10;
	b = N % 10;
	N = a + b;
	a = b;
	b = N % 10;

	while (num != 10*a+b)
	{
		N = a + b;
		a = b;
		b = N % 10;
		i++;
	}

	std::cout << i;

	return 0;
}