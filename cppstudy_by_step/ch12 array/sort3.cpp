#include <iostream>
#include <cstdio>
using namespace std;
//https://www.acmicpc.net/problem/2750
// 카운팅 정렬 (O(n), 알파벳 같이 제한된 범위 숫자일 때)
// printf, scanf를 사용하여 속도 빠르게

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