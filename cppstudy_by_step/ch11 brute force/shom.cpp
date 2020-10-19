#include <iostream>
#include <string>
using namespace std;
// https://www.acmicpc.net/problem/1436

int shom()
{
	int n;
	cin >> n;
	int count = 0;
	int six = 665;
	string s;

	while (++six)
	{
		s = to_string(six);

		if (s.find("666") != -1) count++;

		if (count == n)
		{
			cout << six << endl;
			break;
		}
	}

	return 0;
}