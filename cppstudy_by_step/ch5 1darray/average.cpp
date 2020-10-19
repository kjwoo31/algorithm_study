#include <iostream>
#include <cmath>
using namespace std;

//https://www.acmicpc.net/problem/4344

int average()
{
	int c;
	int n;
	int score[1000] = {0, };
	float perc[1000] = {0, };

	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> n;
		int avg = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			avg += score[j];
		}

		avg = avg / n;

		int good = 0;

		for (int k = 0; k < n; k++)	if (score[k] > avg) good++;

		perc[i] = (float) good / n * 100;
	}

	cout << fixed;
	cout.precision(3);
	for (int i = 0; i < c; i++) cout << perc[i] << "%\n";

	return 0;
}