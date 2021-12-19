#pragma once
#include "Human.h"

class Employee :
    public Human
{
private:
    double salary;
public:
    Employee();
    Employee(const char* name, const Date& birthday, double salary);
    Employee(const Employee& employee);

    //gets
    inline double getSalary() const
    {
        return this->salary;
    }

    //sets
    void setSalary(double salary);

    //operator<<
    friend std::ostream& operator<<(std::ostream& out, const Employee& employee);

};

