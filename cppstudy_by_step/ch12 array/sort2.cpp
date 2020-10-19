#include <iostream>
#include <algorithm>
using namespace std;
//https://www.acmicpc.net/problem/2751
// 시간 복잡도 O((nlogn) (내장 함수, merge sort)

int sort2()
{
	int n;
	cin >> n;
	int a[1000000] = { 0, };
	int temp;

	for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n);

	for (int i = 0; i < n; i++) cout << a[i] << '\n'; //endl의 경우, endl이 나올 때마다 버퍼를 비우는 등의 부하가 발생

	return 0;
}

//int N, arr[1000001];
//int* arr2;
//
//void merge(int left, int right) {
//	int mid = (left + right) / 2;
//
//	int i = left;
//	int j = mid + 1;
//	int k = left;
//	while (i <= mid && j <= right)
//	{
//		if (arr[i] <= arr[j])
//			arr2[k++] = arr[i++];
//		else
//			arr2[k++] = arr[j++];
//	}
//
//	int tmp = i > mid ? j : i;
//
//	while (k <= right) arr2[k++] = arr[tmp++];
//
//	for (int i = left; i <= right; i++) arr[i] = arr2[i];
//}
//
//void partition(int left, int right) {
//	int mid;
//	if (left < right)
//	{
//		mid = (left + right) / 2;
//		partition(left, mid);
//		partition(mid + 1, right);
//		merge(left, right);
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	arr2 = new int[N];
//	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
//
//	partition(0, N - 1);
//
//	for (int i = 0; i < N; i++) printf("%d\n", arr[i]);
//}