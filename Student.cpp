#include "Student.h"

Student::Student() :Human()
{
	this->grants = 0;
}

Student::Student(const char* name, const Date& birthday, double grants) : Human(name, birthday)
{
	this->grants = grants;
}

Student::Student(const Student& student) : Student(student.name, student.birthday, student.grants)
{
}

void Student::setGrants(double grants)
{
	if (grants > 0)
	{
		this->grants = grants;
	}
	else
	{
		this->grants = 0;
	}
}

std::ostream& operator<<(std::ostream& out, const Student& employee)
{
	out << employee.name << "\n";
	out << "Birthday: " << employee.birthday << "\n";
	out << "Grants: " << employee.grants << "\n";
	return out;
}

