//#include <iostream>
//using namespace std;
////https://www.acmicpc.net/problem/11047
//
//int main()
//{
//	int n;
//	long long k;
//	int cnt = 0;
//	long long a[10] = {0, 1, };
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++) cin >> a[i];
//
//	for (int i = n; i > 0; i--)
//	{
//		if (k / a[i] != 0)
//		{
//			cnt += k / a[i];
//			k -= (k / a[i]) * a[i];
//		}
//		if (k == 0)
//			break;
//	}
//
//	cout << cnt;
//
//	return 0;
//}