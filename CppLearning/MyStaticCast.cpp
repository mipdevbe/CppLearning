#include <iostream>
#include "MyStaticCast.h"

using namespace std;

int mainStaticCast()
{

	int x = 123;
	double d = 456.789;
	bool b = true;
	double doubleResult = static_cast<double>(x);

	cout << "Integer to Double: " << doubleResult << endl;
	int intResult = static_cast<int>(d);
	cout << "Double to Integer: " << intResult << endl;
	bool boolResult = static_cast<bool>(x);
	cout << "Integer to Boolean: " << boolResult << endl;

	return 0;
}