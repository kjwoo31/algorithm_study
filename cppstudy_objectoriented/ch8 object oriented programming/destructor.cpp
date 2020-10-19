#include <iostream>
using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(const int& id_in)
		: m_id(id_in)
	{
		cout << "Constructor" << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor" << m_id << endl;
	}
};

void dest()
{
	Simple* s1 = new Simple(0);
	Simple s2(1);

	delete s1; //동적 할당 delete 시 사용 (1)
	//정적 변수 삭제 시에도 사용 (0)

	return;
}