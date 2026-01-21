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

class MyClassD
{
public:

	MyClassD()
	{
		cout << "MyClassD constructor invoked\n";
	}

	MyClassD(const MyClassD& other) = delete;  // Delete the copy constructor

	MyClassD& operator = (const MyClassD& other) = delete; // Delete the copy assignment
};

int mainClassFeatures()
{
	cout << " *** Class Features section ***\n";

	MyClassA a; // ok, there is a default constructor.
	// MyClassB b; // error, no default constructor.
	MyClassC c; // now ok, default constructor has been specified
	MyClassC c2 = c;

	MyClassD d;

	//MyClassD d2 = d;	// Error copy constructor has been deleted
	MyClassD d3;
	//d3 = d;				// Error copy assignment has been deleted

	return 0;
}