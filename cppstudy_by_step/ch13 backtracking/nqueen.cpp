#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/9663

int n;
int cnt = 0;
int board[15] = { 0, }; // x좌표-y좌표

int checkok(int num)
{
	for (int i = 0; i < num; i++)
		if (board[num] == board[i] || num - i == abs(board[num] - board[i]))
			return 0;
	return 1;
}

void chess(int num)
{
	if (num == n) // 끝에 도달
	{
		cnt++;
		return;
	}

	for (int i = 1; i <= n; i++) //하나씩 놓는다 생각
	{
		board[num] = i;

		if (checkok(num)) // 놓아도 괜찮으면, 직선 없고 
			chess(num + 1);

	}
}

int nqueen()
{
	cin >> n;

	chess(0);

	cout << cnt;

	return 0;
}