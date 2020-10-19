//넓이 우선 탐색: root 노드부터 시작하여 연결된 선의 숫자 순서대로 탐색 - 층별로 탐색 (큐 자료구조 사용: 먼저 들어간 자료가 먼저 나온다)
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
		cin >> a >> b; // 서로 연결된 노드
		map[a].push_back(b);
		map[b].push_back(a);
	}
	Q[++back] = 1;
	ch[1] = 1;
	while (front < back) {
		x = Q[++front]; // 1부터 시작, 연결된 map[x][i] 사용
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