#include "Human.h"

Human::Human(const char* name, const Date& birthday)																				
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->birthday = Date(birthday);
}

Human::Human() :Human("Undefined", Date())
{
}

Human::Human(const Human& human) : Human(human.name, human.birthday)
{

}

void Human::setName(const char* name)
{
	if (name != nullptr)
	{
		if (this->name)
		{
			delete[] this->name;
		}
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
}

void Human::setBirthday(const Date& date)
{
	this->birthday.setDay(date.getDay());
	this->birthday.setMonth(date.getMonth());
	this->birthday.setYear(date.getYear());
}

std::ostream& operator<<(std::ostream& out, const Human& human)
{
	out << human.name << "\n";
	out << "Birthday: " << human.birthday << "\n";
	return out;
}
