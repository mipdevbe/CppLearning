#include "MyStaticAssert.h"
#include <iostream>

using namespace std;

int mainStaticAssert()
{
	cout << " *** Static Assert section ***\n";

	constexpr int x = 456;

	static_assert(x == 456, "La valeur constexpr n'est pas 456");

	return 0;
}