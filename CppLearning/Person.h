#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	static int personCount;

public:
	// explicit prevents the constructor from being used for implicit conversions and copy - initialization.
	// It forces callers to construct Person explicitly.

	// Example:
	// Person p1("Alice");      // OK (direct)
	// Person p2{ "Alice" };    // OK (direct-list)
	// Person p3 = { "Alice" }; // Error: copy-list-initializat

	explicit Person(const string& personName) : name{ personName }
	{
	}

	string getName() const {
		return name;
	}

	void myIterationExample() const {
		for (int i = 0; i < 5; i++) {
			Person::personCount++;
		}

		cout << "Total persons counted: " << Person::personCount << endl;
	}
};
