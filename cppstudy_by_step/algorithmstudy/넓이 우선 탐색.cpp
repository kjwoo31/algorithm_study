//���� �켱 Ž��: root ������ �����Ͽ� ����� ���� ���� ������� Ž�� - ������ Ž�� (ť �ڷᱸ�� ���: ���� �� �ڷᰡ ���� ���´�)
#include <iostream>
#include <vector>
using namespace std;
int Q[100], ch[10];
int front = -1;
int back = -1;
vector<int> map[10];

int queue()
{
	int i, a, b, x;
	for (i = 1; i <= 6; i++) {
		cin >> a >> b; // ���� ����� ���
		map[a].push_back(b);
		map[b].push_back(a);
	}
	Q[++back] = 1;
	ch[1] = 1;
	while (front < back) {
		x = Q[++front]; // 1���� ����, ����� map[x][i] ���
		cout << x;
		for (i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				Q[++back] = map[x][i];
			}
		}
	}

	return 0;
}