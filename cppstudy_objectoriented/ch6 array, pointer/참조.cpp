#include<iostream>
using namespace std;

void reference()
{
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;

	int& ref = value;

	cout << &value << endl;
	cout << ref << endl; //value�� �ּ� ����, value�� �����̶� ����.
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl; //�������� �ּ�

	return;
}