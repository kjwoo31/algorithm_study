#include <iostream>

// https://www.acmicpc.net/problem/2884

int clock()
{
	int h;
	int m;

	std::cin >> h;
	std::cin >> m;

	m -= 45;

	if (m < 0)
	{
		h -= 1;
		m += 60;
		if (h < 0)
		{
			h += 24;
		}
	}

	std::cout << h << " " << m;

	return 0;
}
