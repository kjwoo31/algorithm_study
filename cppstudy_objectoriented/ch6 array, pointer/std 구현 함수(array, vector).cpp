#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;

void instd()
{
	//array 정적 배열 대체
	array<int, 5> arr = { 7,9,2,3, };
	for (auto& element : arr)
		cout << element << " ";
	cout << endl;

	sort(arr.begin(), arr.end());
	for (auto& element : arr)
		cout << element << " ";
	cout << endl;

	//vector
	vector<int> arr2 = {1,2,3,4,5};

	arr2.resize(10);

	for (auto& element : arr2)
		cout << element << " ";
	cout << endl;
	cout << arr2.size() << endl;
	cout << arr2[1] << endl;

	return;
}