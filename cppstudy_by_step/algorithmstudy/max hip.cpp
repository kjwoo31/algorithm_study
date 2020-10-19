// 힙은 여러 개의 값들 중 최댓값이나 최솟값을 빠르게 찾는 자료구조
// 최대힙(priority queue 사용): 부모 노드 값이 왼쪽 자식과 오른쪽 자식 노드의 값보다 크게 트리를 구성. root 노드는 입력값 중 가장 큰 값이 저장
// 하나씩 순서대로 부모 node와 숫자 비교하여 교환
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