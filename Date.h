#pragma once
#include<iostream>

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int day, int month, int year);
	Date(const Date& date);

	//sets
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	//gets
	inline int getDay() const
	{
		return this->day;
	}
	inline int getMonth() const
	{
		return this->month;
	}
	inline int getYear() const
	{
		return this->year;
	}

	//operator <<
	friend std::ostream& operator<<(std::ostream& out, const Date& date);
};

