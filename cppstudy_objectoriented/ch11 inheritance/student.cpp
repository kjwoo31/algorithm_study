// 중복되지 않는 것은 자식 class에 따로 정리, 중복되는 건 부모 class에서 정의

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