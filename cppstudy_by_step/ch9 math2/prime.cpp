#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/1978
//소수의 개수는 에라토스테네스의 체로 계산

int prime()
{
	int n, num;
	int count = 0;
	int a[1001];
	fill_n(a, 1001, 1);
	a[1] = 0;

	for (int i = 2; i*i <= 1000; i++)
		if (a[i])
			for (int j = i * i; j <= 1000; j += i)
				a[j] = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (a[num]) count++;
	}
	cout << count;
	
	return 0;
}