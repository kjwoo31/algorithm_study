#include <iostream>

//https://www.acmicpc.net/problem/2739

int multiple()
{

	int a;
	std::cin >> a;

	for (int i = 1; i < 10; i++)	std::cout << a << " * " << i << " = " << a * i << "\n";

	return 0;
}