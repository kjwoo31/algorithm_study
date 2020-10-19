#include <iostream>
#include "Header.h"
using namespace std;

void Friend::print()
{
	cout << name << " " << address << " " << age << " " << height << " " << weight;
}

void oop()
{
	Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 };
	jj.print();

	return;
}