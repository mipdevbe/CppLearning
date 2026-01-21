#include "MyConstexprLambda.h"
#include <iostream>
#include <string>

using namespace std;

int mainConstexprLambda()
{
	cout << " *** Constexpr Lambda section ***\n";

	constexpr auto myLambda = [](int x, int y) { return y + x; };

	static_assert(myLambda(10, 20) == 30, "Wrong lambda condition");

	auto myLambda2 = [](int x, int y) { return y + x; };

	static_assert(myLambda2(10, 20) == 30, "Wrong lambda condition");

	return 0;
}