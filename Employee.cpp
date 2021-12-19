#include "Employee.h"

Employee::Employee():Human()
{
	this->salary = 0;
}

Employee::Employee(const char* name, const Date& birthday, double salary) : Human(name, birthday)
{
	this->salary = salary;
}

Employee::Employee(const Employee& employee) : Employee(employee.name, employee.birthday, employee.salary)
{
}

void Employee::setSalary(double salary)
{
	if (salary > 0)
	{
		this->salary = salary;
	}
	else
	{
		this->salary = 0;
	}
}

std::ostream& operator<<(std::ostream& out, const Employee& employee)
{
	out << employee.name << "\n";
	out << "Birthday: " << employee.birthday << "\n";
	out << "Salary: " << employee.salary << "\n";
	return out;
}
