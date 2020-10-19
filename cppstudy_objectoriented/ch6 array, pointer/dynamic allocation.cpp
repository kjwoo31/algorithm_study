#include<iostream>
using namespace std;

void dynamic()
{
	//Debug - Windows - Show Diagnostic Tools 확인
	//new, delete

	//1개
	int* ptr = new int;
	cout << ptr << endl;
	delete ptr;

	//배열
	int length;
	cin >> length;
	int* array = new int[length]();
	

	for (int i = 0; i < length; ++i)
	{
		cout << (uintptr_t) & array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;

}