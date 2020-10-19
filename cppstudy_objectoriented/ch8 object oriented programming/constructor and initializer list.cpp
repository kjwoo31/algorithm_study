// class 사용 시 생성되는 것들
#include <iostream>
using namespace std;

class First
{
private:
	int m_i;
	double m_d;
	char m_c;

public:
	First() //constructor
		:m_i{ 1 }, m_d{ 3.14 }, m_c{'a'} // initializer list
	{
		cout << "class First constructor()" << endl;
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c;
	}
};

void start()
{
	First fir;
	cout << endl;
	fir.print();

	return;
}