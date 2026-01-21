#include "MyExplicit.h"
#include <iostream>
#include <string>

using namespace std;

class BasedExplicitPerson {
private:
	std::string name;

public:

	 BasedExplicitPerson(const std::string& name) : name(name) {
		std::cout << "Person created " << name << std::endl;
	}

	std::string getName() const {
		return name;
	}

};

void greet(const BasedExplicitPerson& p) {
	std::cout << "Hello " << p.getName() << std::endl;
}

class UserId {
private: 
	int _id;

public:
	UserId(int id) : _id(id) {}

	int getId() const { return _id; }
};

void foo(const UserId& userId) {
	cout << "UserId = " << userId.getId() << "\n";
}

void foo(int id) {
	cout << "Value = " << id << "\n";
}

int mainExplicit()
{
	cout << " *** Explicit section ***\n";

	//greet("James");
	
	foo(15);
	//foo(15.5);
	//foo(true);

	//foo(UserId{ 15 });

	return 0;
}
