#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/1463
//�߸� �����ߴ�. Ǯ�̸� �ôµ��� ���ذ� �� �� �Ǽ� �ϴ� pass


int cnt=-1;

bool thr(int num) { return (num % 3 == 0); }
bool two(int num) { return (num % 2 == 0); }

void makeone(int num)
{
	cnt++;
	if (num == 1)
		return;
	else if (thr(num))
		makeone(num / 3);
	else if (two(num))
		makeone(num / 2);
	else
		makeone(num - 1);
}

int main()
{
	int n;
	cin >> n;

	makeone(n);

	cout << cnt;

	return 0;
}