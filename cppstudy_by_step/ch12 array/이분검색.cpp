//일렬로 서있는 데이터를 정렬 후 값의 위치 번호 출력
#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int search() {
	int n, i, key, rt, mid, tmp;
	int lt = 0;
	cin >> n >> key;

	vector<int> a;
	for (i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());

	rt = n - 1;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (a[mid] == key) {
			cout << mid + 1;
			return 0;
		}
		else if (a[mid] > key) rt = mid - 1;
		else lt = mid + 1;
	}
}
