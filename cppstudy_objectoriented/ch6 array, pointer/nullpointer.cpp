#include<iostream>
using namespace std;

void doSomething(double *ptr)
{
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

void pointer()
{
	//Á¤ÀÇ
	int x = 5;
	int *ptr_x = &x, *ptr_y = &x;
	
	// null pointer
	double* ptr = nullptr;

	doSomething(ptr);
	doSomething(nullptr);
	
	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	return;
	

}