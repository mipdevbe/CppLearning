// CppLearning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring> // required for C-style string functions
#include <string> // Add this include at the top of your file
#include <utility> // for std::move

using namespace std;

#define LENGTH(x) (sizeof(x) / sizeof(x[0]))

// Function example
void customMessage(const string& message)
{
	cout << message << endl;
}

// Class example
class MyClass {
	char c;
	int x;
	bool b;
	double d;

public:
	
	// Default constructor
	MyClass() : c{ '-' }, x{ 0 }, b{ false }, d{ 0 } {
		cout << "MyClass constructor called." << endl;
	}

	// Overloaded constructor
	MyClass(char cc, int xx, bool bb, double dd) : MyClass() {
		c = cc;
		x = xx;
		b = bb;
		d = dd;
	}

	// Move constructor
	MyClass(MyClass&& other) noexcept : c{ move(other.c) }, x{ move(other.x) }, b(move(other.b)), d(move(other.d)) {
		cout << "MyClass move constructor called." << endl;
	}

	// Copy constructor
	MyClass(const MyClass& copy) : MyClass(copy.c, copy.x, copy.b, copy.d) {
	}

	// Copy assignment operator
	MyClass& operator=(const MyClass& other) {
		if (this != &other) {
			c = other.c;
			x = other.x;
			b = other.b;
			d = other.d;
		}
		return *this;
	}


	//MyClass operator -(const MyClass& other) const {
	//	MyClass result(*this);
	//	result.x -= other.x;
	//	return result;
	//}

	friend MyClass operator -(const MyClass& lhs, const MyClass& rhs) {
		MyClass result(lhs);
		result.x -= rhs.x;
		return result;
	}

	virtual ~MyClass() {
		cout << "MyClass destructor called." << endl;
	}

	void printMessage(const string& message)
	{
		cout << message << endl;
	}

	void setX(int myNewValue)
	{
		x = myNewValue;
	}

	int getX() const
	{
		return x;
	}
};


int main()
{
    // This is a simple C++ program that prints "Hello World!" to the console.
    cout << "Hello World!\n";

	// Variable examples
	char myChar{ 'A' };
	int myInt{ 42 };
	double myDouble{ 3.14 };

	cout << "Character: " << myChar << endl;	
	cout << "Integer: " << myInt << endl;	
	cout << "Double: " << myDouble << endl;

	// Array example
	double myDoubles[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	myDoubles[0] = 9.9;
	myDoubles[LENGTH(myDoubles) - 1] = 9.9;
	for (int i = 0; i < LENGTH(myDoubles); i++) {
		cout << "myDoubles[" << i << "] = " << myDoubles[i] << endl;
	}


	// Pointer example
	double myDoubleValue = 7.7;
	double* pMyDouble = &myDoubleValue;
	cout << "Value of myDoubleValue: " << myDoubleValue << endl;
	cout << "Address of myDoubleValue: " << pMyDouble << endl;
	*pMyDouble = 8.8;
	cout << "value of myDoubleValue: " << *pMyDouble << endl;
	cout << "New value of myDoubleValue: " << myDoubleValue << endl;

	// Reference example
	double myRefDouble = 10.10;
	double& refToMyDouble = myRefDouble;
	cout << "Value of myRefDouble: " << myRefDouble << endl;
	cout << "Value via reference: " << refToMyDouble << endl;
	refToMyDouble = 11.11;
	cout << "New value of myRefDouble: " << myRefDouble << endl;

	// String example
	string s1 = "Hello";
	string s2 = "World";
	string s3 = s1 + " " + s2;
	cout << "Le chaine resultant est: " << s3 << endl;

	// User input example
	string fullName = "";
	cout << "Enter your full name: ";
	getline(cin, fullName);

	cout << "Your full name is: " << fullName << endl;

	// String manipulation example
	
	// *** fullName.clear(); // Clear the string for reuse ***
	fullName = "John Doe";
	string firstName = fullName.substr(0, 4);
	string lastName = fullName.substr(5);
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;

	// Finding characters and substrings
	string s = "Hello C++ World.";
	char c = 'C';
	size_t pos = s.find(c);
	if (pos != string::npos) {
		cout << "Character '" << c << "' found at position: " << pos << endl;
	} else {
		cout << "Character '" << c << "' not found." << endl;
	}

	string mySubString = "C++";
	pos = s.find(mySubString);
	if (pos != string::npos) {
		cout << "Substring \"" << mySubString << "\" found at position: " << pos << endl;
	} else {
		cout << "Substring \"" << mySubString << "\" not found." << endl;
	}

	// Auto type deduction example
	auto valueInt = 100;
	cout << "Value is: " << valueInt << endl;

	auto valueDouble = 99.99;
	cout << "Value is: " << valueDouble << endl;

	auto valueString = "This is a string";
	cout << "Value is: " << valueString << endl;

	// Function call example
	customMessage("This is a custom message from a function.");

	// Dynamic memory allocation example
	int* pInt = new int;
	*pInt = 123;
	cout << "Dynamically allocated integer value: " << *pInt << endl;
	delete pInt;
	pInt = nullptr;

	// Dynamic array allocation example
	int* pIntArray = new int[5];
	for (int i = 0; i < 5; i++) {
		pIntArray[i] = i * 10;
		cout << "pIntArray[" << i << "] = " << pIntArray[i] << endl;
	}
	delete[] pIntArray;
	pIntArray = nullptr;

	MyClass o;
	o.printMessage("Hello from MyClass!");

	o.setX(55);
	cout << "Value of x in MyClass: " << o.getX() << endl;

	MyClass o2(o);
	cout << "Value of x in MyClass: " << o2.getX() << endl;

	MyClass o3(move(o2));
	cout << "Value of x in MyClass: " << o3.getX() << endl;

	MyClass o4 = move(o3);
	cout << "Value of x in MyClass: " << o4.getX() << endl;

	MyClass o5  = o - o4;
	cout << "Value of x in MyClass after operator-: " << o5.getX() << endl;
	return 0;	
}

