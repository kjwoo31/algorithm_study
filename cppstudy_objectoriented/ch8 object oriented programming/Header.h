#pragma once
#include <iostream>
using namespace std;

class Friend
{
public:				// access specifier, private���� �ϸ� class �ȿ����� ��� ����
	string name;
	string address;
	int age;
	double height;
	double weight;

	void print();
};