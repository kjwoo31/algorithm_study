#include<iostream>
using namespace std;

void dynamic()
{
	//Debug - Windows - Show Diagnostic Tools Ȯ��
	//new, delete

	//1��
	int* ptr = new int;
	cout << ptr << endl;
	delete ptr;

	//�迭
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