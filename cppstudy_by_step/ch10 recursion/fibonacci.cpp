#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/2747

int n;
int cnt = 1;

void fibonacci(int a, int b)
{
	cnt++;
	if (cnt == n)
	{
		cout << a + b;
		return;
	}
	fibonacci(b, a + b);
}

int main()
{
	cin >> n;
	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	if (n == 1)
	{
		cout << 1;
		return 0;
	}

	fibonacci(0, 1);

	return 0;
}