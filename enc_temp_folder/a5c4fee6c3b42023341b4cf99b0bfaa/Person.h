#pragma once
#include <string>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	// explicit prevents the constructor from being used for implicit conversions and copy - initialization.
	// It forces callers to construct Person explicitly.

	// Example:
	// Person p1("Alice", 30);      // OK (direct)
	// Person p2{ "Alice", 30 };    // OK (direct-list)
	// Person p3 = { "Alice", 30 }; // Error: copy-list-initializat

	explicit Person(const string& personName, int personAge) : name{ personName }, age{ personAge } 
	{
	}

	string getName() const {
		return name;
	}

	int getAge() const {
		return age;
	}
};

