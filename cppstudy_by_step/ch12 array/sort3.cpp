#include <iostream>
#include <cstdio>
using namespace std;
//https://www.acmicpc.net/problem/2750
// ī���� ���� (O(n), ���ĺ� ���� ���ѵ� ���� ������ ��)
// printf, scanf�� ����Ͽ� �ӵ� ������

int sort3()
{
	int a[10001] = { 0, };
	int n;
	int num;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d",&num);
		a[num]++;
	}

	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < a[i]; j++)
			printf("%d\n", i);

	return 0;
}