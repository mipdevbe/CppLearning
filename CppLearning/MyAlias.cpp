#include "MyAlias.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int mainAlias()
{
	cout << " *** Alias section ***\n";

	using MyInt = int;
	using MyString = string;
	using MyVector = vector<int>;

	MyInt x = 123;
	MyString s = "Hello World";
	MyVector v = { 1, 2, 3 };

	return 0;
}