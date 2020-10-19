#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/15649

int n, m;
int a[9] = { 0, };
bool visit[9] = { 0, };

void dfs(int count)
{
	if (count == m)
	{
		for (int i = 0; i < m; i++)
			cout << a[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; i++)
		if (!visit[i])
		{
			visit[i] = 1;
			a[count] = i;
			dfs(count + 1);
			visit[i] = 0;
		}
}

int nm()
{
	cin >> n >> m;

	dfs(0);

	return 0;
}