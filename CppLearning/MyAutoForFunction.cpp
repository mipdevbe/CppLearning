#include "MyAutoForFunction.h"
#include <iostream>
#include <string>

using namespace std;

auto myintfn() // entier
{
	return 123;
}

auto mydoublefn() // double
{
	return 3.14;
}

int mainAutoForFunction()
{
	cout << " *** Auto For Function section ***\n";

	auto x = myintfn(); // entier
	auto d = mydoublefn(); // double

	return 0;
}