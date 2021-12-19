#pragma once
#include "Human.h"

class Schoolchild :
    public Human
{
private:
    double avrgGrade;

public:
    Schoolchild();
    Schoolchild(const char* name, const Date& birthday, double avrgGrade);
    Schoolchild(const Schoolchild& schoolchild);

    //gets
    inline double getAverageGrade() const
    {
        return this->avrgGrade;
    }

    //sets
    void setAverageGrade(double grants);

    //operator<<
    friend std::ostream& operator<<(std::ostream& out, const Schoolchild& schoolchild);
};

