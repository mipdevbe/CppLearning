#pragma once
#include "Person.h"
class Student : public Person
{
private:
	int semester;

public:

	Student(const string& studentName, int studentSemester)
		: Person{ studentName }, semester{ studentSemester }
	{
	}

	int getSemester() const 
	{
		return semester;
	}
};

