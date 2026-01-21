#include "MyClassFeatures.h"
#include <iostream>

using namespace std;

class MyClassA
{

};

class MyClassB
{
public:
	MyClassB(const MyClassB& other)
	{
		cout << "MyClassB copy constructor invoked\n";
	}
};

class MyClassC
{
public:
	MyClassC() = default;

	MyClassC(const MyClassC& other)
	{
		cout << "MyClassC copy constructor invoked\n";
	}
};

int mainClassFeatures()
{
	cout << " *** Class Featuressection ***\n";

	MyClassA a; // ok, there is a default constructor.
	// MyClassB b; // error, no default constructor.
	MyClassC c; // now ok, default constructor has been specified
	MyClassC c2 = c;

	return 0;
}