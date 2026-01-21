#include "MyExplicit.h"
#include <iostream>
#include <string>

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


int mainExplicit()
{
	//greet("James");

	return 0;
}
