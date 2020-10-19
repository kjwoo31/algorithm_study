#include<iostream>
#include <vector>
using namespace std;

void foreach()
{
	//int fib[] = { 0, 1, 1,2 ,3,5,8,13,
	//				21, 34, 55, 89 };

	//동적 할당할 경우에는 vector (배열은 동적 할당 x)
	vector<int> fib = { 0, 1, 1,2 ,3,5,8,13,
					21, 34, 55, 89 };

	int max_num = numeric_limits<int>::lowest();

	for (const auto& n : fib)
		max_num = max(max_num, n);

	cout << max_num << endl;
	
	return;
}