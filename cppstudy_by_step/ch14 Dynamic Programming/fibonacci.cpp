//#include <iostream>
//using namespace std;
////https://www.acmicpc.net/problem/2748
////재귀함수를 한 번만 돌려 배열에 저장
//
//long long a[90] = { 0,1, };
//
//long long fibo(int n)
//{
//	if (n == 0 || n == 1)
//		return a[n];
//	else if (a[n] == 0)
//		a[n] = fibo(n - 1) + fibo(n - 2);
//	return a[n];
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	cout << fibo(n);
//
//	return 0;
//}