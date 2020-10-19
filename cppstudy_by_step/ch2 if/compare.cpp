#include <iostream>

// https://www.acmicpc.net/problem/1330

int compare()
{
	int a;
	int b;

	std::cin >> a;
	std::cin >> b;

	if (a > b) std::cout << ">";
	if (a < b) std::cout << "<";
	if (a == b) std::cout << "==";

	return 0;
}
