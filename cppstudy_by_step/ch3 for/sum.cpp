#include <iostream>

// https://www.acmicpc.net/problem/15552
//C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자. 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
//cin.tie(NULL)과 sync_with_stdio(false)는 입출력 속도를 빠르게 해준다.

using namespace std;

int sum()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num, a, b;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}
