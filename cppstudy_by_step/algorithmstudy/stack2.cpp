// K진수 출력2
#include <iostream>
#include <stack>
using namespace std;

int stack2()
{
	int n, k;
	stack<int> s;
	char str[20] = "0123456789ABCDEF";
	cin >> n >> k;
	while (n > 0) {
		s.push(n % k);
		n = n / k;
	}
	while (!s.empty()) {
		cout << str[s.top()];
		s.pop();
	}
	return 0;
}