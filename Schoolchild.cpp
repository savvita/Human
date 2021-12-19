#include "Schoolchild.h"

Schoolchild::Schoolchild() :Human()
{
	this->avrgGrade = 0;
}

Schoolchild::Schoolchild(const char* name, const Date& birthday, double avrgGrade) : Human(name, birthday)
{
	this->avrgGrade = avrgGrade;
}

Schoolchild::Schoolchild(const Schoolchild& schoolchild) : Schoolchild(schoolchild.name, schoolchild.birthday, schoolchild.avrgGrade)
{
}

void Schoolchild::setAverageGrade(double avrgGrade)
{
	if (avrgGrade > 0)
	{
		this->avrgGrade = avrgGrade;
	}
	else
	{
		this->avrgGrade = 0;
	}
}

std::ostream& operator<<(std::ostream& out, const Schoolchild& schoolchild)
{
	out << schoolchild.name << "\n";
	out << "Birthday: " << schoolchild.birthday << "\n";
	out << "Average grade: " << schoolchild.avrgGrade << "\n";
	return out;
}
