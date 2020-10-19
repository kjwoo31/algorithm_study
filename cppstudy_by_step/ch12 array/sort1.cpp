#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/2750
// 시간 복잡도 O(n²)

int sort1()
{
	int n;
	cin >> n;
	int a[1000] = {0, };
	int temp;

	for (int i = 0; i < n; i++) cin >> a[i];

	for(int i = 0; i<n;i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

	for (int i = 0; i < n; i++) cout << a[i] << endl;

	return 0;
}