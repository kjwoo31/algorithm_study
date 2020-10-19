#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/2869

int snail()
{
	int a, b, v;

	cin >> a >> b >> v;

	cout << (v - b - 1) / (a - b) + 1;

	return 0;
}