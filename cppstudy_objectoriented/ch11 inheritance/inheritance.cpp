// 중복되지 않는 것은 자식 class에 따로 정리, 중복되는 건 부모 class에서 정의

#include <iostream>
using namespace std;

class Mother
{
protected: //private이면서 자식에게는 허용
	int m_i;

public:
	Mother()
		: m_i(0)
	{
	}

	Mother(const int & i_in)
		: m_i(i_in)
	{
	}

	void setValue(const int& i_in) //함수에서 주소까지 공유
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother
{
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in)
		:Mother(i_in), m_d(d_in)
	{
	}

	void setValue(const int& i_in, const double& d_in) //오버라이딩
	{
		Mother::setValue(i_in);
		m_d = d_in;
	}

	void setValue(const double& d_in) //오버로딩
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

void inherit()
{
	Mother mother(1024);
	//mother.setValue(1024);
	cout << mother.getValue() << endl;

	Child child(1024,128);
	//child.setValue(1024);
	cout << child.getValue() << endl;

	return;
}