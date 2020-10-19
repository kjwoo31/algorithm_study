#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/9663

int n;
int cnt = 0;
int board[15] = { 0, }; // x��ǥ-y��ǥ

int checkok(int num)
{
	for (int i = 0; i < num; i++)
		if (board[num] == board[i] || num - i == abs(board[num] - board[i]))
			return 0;
	return 1;
}

void chess(int num)
{
	if (num == n) // ���� ����
	{
		cnt++;
		return;
	}

	for (int i = 1; i <= n; i++) //�ϳ��� ���´� ����
	{
		board[num] = i;

		if (checkok(num)) // ���Ƶ� ��������, ���� ���� 
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