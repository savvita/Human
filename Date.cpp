#include "Date.h"

Date::Date() :Date(0, 0, 0)
{
}

Date::Date(int day, int month, int year)
{
	this->setDay(day);
	this->setMonth(month);
	this->setYear(year);
}

Date::Date(const Date& date):day{date.day}, month{ date.month }, year{ date.year }
{
}

void Date::setDay(int day)
{
	if (day >= 1 && day <= 31)
	{
		this->day = day;
	}
	else
	{
		this->day = 0;
	}
}

void Date::setMonth(int month)
{
	if (month >= 1 && month <= 12)
	{
		this->month = month;
	}
	else
	{
		this->month = 0;
	}
}

void Date::setYear(int year)
{
	this->year = year;
}

std::ostream& operator<<(std::ostream& out, const Date& date)
{
	if (date.day != 0 && date.month != 0 && date.year != 0)
	{
		out << date.day << "." << date.month << "." << date.year;
	}
	else
	{
		out << "Undefined";
	}
	return out;
}
