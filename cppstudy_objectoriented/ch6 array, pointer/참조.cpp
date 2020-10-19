#include<iostream>
using namespace std;

void reference()
{
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;

	int& ref = value;

	cout << &value << endl;
	cout << ref << endl; //value와 주소 공유, value의 별명이라 생각.
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl; //포인터의 주소

	return;
}