#include <iostream>
#include <string>

// https://www.acmicpc.net/problem/1152

using namespace std;

int count()
{
	string s;
	int count=0;
	getline(cin, s);

	if (s.front() == ' ') s.erase(s.begin());
	if (s.back() == ' ') s.erase(s.end() - 1);

	if (!s.empty()) count++;

	for (int i = 0; i < s.size(); i++)	if (s[i] == ' ') count++;
	
	cout << count;

	return 0;
}