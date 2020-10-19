#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/15650

int n, m;
int a[9] = { 0, };
bool visit[9] = { 0, };

void dfs(int count, int min)
{
	if (count == m)
	{
		for (int i = 0; i < m; i++)
			cout << a[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = min; i <= n; i++)
		if (!visit[i])
		{
			visit[i] = 1;
			a[count] = i;
			dfs(count + 1, i);
			visit[i] = 0;
		}
}

int nm2()
{
	cin >> n >> m;

	dfs(0, 1);

	return 0;
}