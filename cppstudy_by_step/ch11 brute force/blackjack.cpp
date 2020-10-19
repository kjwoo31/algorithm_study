#include <iostream>
using namespace std;
// https://www.acmicpc.net/problem/2798
// 모든 경우의 수 생각하는 알고리즘

int blackjack()
{
	int n, m;
	int card[100];
	int score=0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)	cin >> card[i];

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
			{
				if (card[i] + card[j] + card[k] > score && card[i] + card[j] + card[k] <= m)
					score = card[i] + card[j] + card[k];
			}
	cout << score;
	return 0;
}
