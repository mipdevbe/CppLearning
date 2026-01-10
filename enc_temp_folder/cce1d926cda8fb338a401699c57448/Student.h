#pragma once
#include "Person.h"
class Student : public Person
{
private:
	int semester;

public:
	// explicit prevents the constructor from being used for implicit conversions and copy - initialization.
	// It forces callers to construct Student explicitly.
	// Example:
	// Student s1("Bob", 20, 3);      // OK (direct)
	// Student s2{ "Bob", 20, 3 };    // OK (direct-list)
	// Student s3 = { "Bob", 20, 3 }; // Error: copy-list-initialization

	explicit Student(const string& studentName, int studentAge, int studentSemester)
		: Person{ studentName, studentAge }, semester{ studentSemester }
	{
	}

	int getSemester() const 
	{
		return semester;
	}
};

