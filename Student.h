#pragma once
#include "Human.h"

class Student :
    public Human
{
private:
    double grants;
public:
    Student();
    Student(const char* name, const Date& birthday, double grants);
    Student(const Student& employee);

    //gets
    inline double getGrants() const
    {
        return this->grants;
    }

    //sets
    void setGrants(double grants);

    //operator<<
    friend std::ostream& operator<<(std::ostream& out, const Student& student);
};

