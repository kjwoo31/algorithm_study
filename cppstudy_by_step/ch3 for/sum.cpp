#include <iostream>

// https://www.acmicpc.net/problem/15552
//C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�, endl ��� ���๮��(\n)�� ����. ��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.
//cin.tie(NULL)�� sync_with_stdio(false)�� ����� �ӵ��� ������ ���ش�.

using namespace std;

int sum()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num, a, b;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}
