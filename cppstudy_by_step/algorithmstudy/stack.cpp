// K진수 출력
#include <iostream>
using namespace std;
int num[100];
int top = -1;

void push(int x) {
	num[++top] = x;
}

int pop() {
	return num[top--];
}


int stack()
{
	int n, k;
	char str[20] = "0123456789ABCDEF";
	cin >> n >> k;
	while (n > 0) {
		push(n % k);
		n = n / k;
	}
	while (top != -1) cout << str[pop()];

	return 0;
}