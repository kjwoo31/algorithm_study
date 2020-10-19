#include<iostream>
using namespace std;

struct Rectangle
{
	int length;
	int width;
};

void struct_arr()
{
	cout << sizeof(Rectangle) << endl; //8 (int 2°³)
	
	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl; //80

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	return;
}