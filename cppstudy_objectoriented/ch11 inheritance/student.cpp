// �ߺ����� �ʴ� ���� �ڽ� class�� ���� ����, �ߺ��Ǵ� �� �θ� class���� ����

#include "Student.h"
#include "Teacher.h"

void student()
{
	Student std("Jack Jack");
	std.setName("Jack Jack 2");
	std.getName();
	std::cout << std.getName() << std::endl;

	Teacher teacher1("Dr.H");
	teacher1.setName("Dr.K");
	std::cout << teacher1.getName() << std::endl;

	return;
}