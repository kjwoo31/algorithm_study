#pragma once
#include <iostream>
using namespace std;

class Friend
{
public:				// access specifier, private으로 하면 class 안에서만 사용 가능
	string name;
	string address;
	int age;
	double height;
	double weight;

	void print();
};