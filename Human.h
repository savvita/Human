#pragma once
#include"Date.h"
#include<iostream>

class Human
{
private:
	char* name;
	Date birthday;

public:
	Human();
	Human(const char* name, const Date& birthday);
	Human(const Human& human);

	//gets
	inline const char* getName() const
	{
		return this->name;
	}
	inline const Date& getBirthday() const
	{
		return this->birthday;
	}

	//sets
	void setName(const char* name);
	void setBirthday(const Date& date);

	//operator <<
	friend std::ostream& operator<<(std::ostream& out, const Human& human);

	~Human();
};

