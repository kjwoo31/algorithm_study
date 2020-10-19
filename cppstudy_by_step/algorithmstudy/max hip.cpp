// ���� ���� ���� ���� �� �ִ��̳� �ּڰ��� ������ ã�� �ڷᱸ��
// �ִ���(priority queue ���): �θ� ��� ���� ���� �ڽİ� ������ �ڽ� ����� ������ ũ�� Ʈ���� ����. root ���� �Է°� �� ���� ū ���� ����
// �ϳ��� ������� �θ� node�� ���� ���Ͽ� ��ȯ
#include <iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int maxhip()
{
	int a;
	priority_queue<int> pQ;
	while (true) {
		cin >> a;
		if (a == -1) break;
		if (a == 0) {
			if (pQ.empty()) cout << -1 << "\n";
			else {
				cout << pQ.top() << "\n";
				pQ.pop();
			}
		}
		else pQ.push(a);
	}
	return 0;
}