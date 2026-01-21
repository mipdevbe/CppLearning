#include "MyTuple.h"
#include <iostream>
#include <utility>
#include <tuple>
#include <string>

using namespace std;

int mainTuple()
{
	cout << " *** Tuple section ***\n";

	tuple<char, int, double> tpl = { 'a', 123, 3.14 };
	cout << "The first item = " << get<0>(tpl) << "\n";
	cout << "The second item = " << get<1>(tpl) << "\n";
	cout << "The third item = " << get<2>(tpl) << "\n";

	auto tpl2 = make_tuple<int, double, string>(123, 3.14, "Hello World");
	cout << "The first item = " << get<0>(tpl2) << "\n";
	cout << "The second item = " << get<1>(tpl2) << "\n";
	cout << "The third item = " << get<2>(tpl2) << "\n";

	return 0;
}