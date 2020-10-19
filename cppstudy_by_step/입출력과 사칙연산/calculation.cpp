#include <iostream>

// https://www.acmicpc.net/problem/10869

void cal()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;

	std::cout << a + b;
	std::cout << "\n";
	std::cout << a - b;
	std::cout << "\n";
	std::cout << a * b;
	std::cout << "\n";
	std::cout << a / b;
	std::cout << "\n";
	std::cout << a % b;
}