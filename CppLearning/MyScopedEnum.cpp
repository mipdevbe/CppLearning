#include "MyScopedEnum.h"
#include <iostream>

using namespace std;

enum class MyEnumerator
{
	myFirstValue,
	mySecondValue,
	myThirdValue
};

int mainScopedEnum()
{
	cout << " *** Scoped Enum section ***\n";
	MyEnumerator myEnum = MyEnumerator::myFirstValue;

	return 0;
}