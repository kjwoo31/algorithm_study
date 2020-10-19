#include <iostream>
using namespace std;

class A;

class B
{
private:
	int m_value = 2;

public:
	void doSomething(A& a);
};

class A
{
private:
	int m_value = 1;

	friend void B::doSomething(A& a); // B의 private 정보에 접근 (m_value)
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}

void fri()
{
	A a;
	B b;
	b.doSomething(a);

	return;
}