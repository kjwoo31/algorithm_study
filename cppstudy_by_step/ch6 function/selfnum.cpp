#include <iostream>

//https://www.acmicpc.net/problem/4673

int notselfnum(int a);

int main()
{
	int notself[10000] = { 0, };

	for (int i = 0; i < 10000; i++)
		if (notselfnum(i) < 10000)
			notself[notselfnum(i)] = 1;

	for (int i = 0; i < 10000; i++)
		if (notself[i] != 1)
			std::cout << i << "\n";
}

int notselfnum(int a)
{
	int one;
	int two;
	int thr;
	int fou;

	one = a % 10;
	two = (a / 10) % 10;
	thr = (a / 100) % 10;
	fou = (a / 1000) % 10;

	return a + one + two + thr + fou;
}