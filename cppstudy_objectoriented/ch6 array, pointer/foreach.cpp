#include<iostream>
#include <vector>
using namespace std;

void foreach()
{
	//int fib[] = { 0, 1, 1,2 ,3,5,8,13,
	//				21, 34, 55, 89 };

	//���� �Ҵ��� ��쿡�� vector (�迭�� ���� �Ҵ� x)
	vector<int> fib = { 0, 1, 1,2 ,3,5,8,13,
					21, 34, 55, 89 };

	int max_num = numeric_limits<int>::lowest();

	for (const auto& n : fib)
		max_num = max(max_num, n);

	cout << max_num << endl;
	
	return;
}