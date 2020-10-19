#include <iostream>

//https://www.acmicpc.net/problem/10871

int num()
{
	int n;
	int x;
	int num;

	std::cin >> n >> x;

	for (int i = n; i > 0; i--)
	{
		std::cin >> num;
		if(num<x)	std::cout << num << " ";
	}
	return 0;
}