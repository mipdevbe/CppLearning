#include "MyGenericLambda.h"
#include <iostream>
#include <string>

using namespace std;

int mainGenericLambda()
{
	cout << " *** Generic Lambda section ***\n";

	auto myLambda = [](auto p) { cout << "Lambda parameter : " << p << endl; };

	myLambda(123);
	myLambda(3.14);

	return 0;
}