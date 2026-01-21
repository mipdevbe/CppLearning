#include "MyStructuredBindings.h"
#include <iostream>
#include <string>

using namespace std;

int mainStructuredBindings()
{
	cout << " *** Structured Bindings section ***\n";

	int arr[] = { 1, 2, 3 };
	auto [myVal1, myVal2, myVal3] = arr;

	cout << myVal1 << " " << myVal2 << " " << myVal3 << endl;
	myVal1 = 10;
	myVal2 = 20;
	myVal3 = 30;

	for (auto& el : arr) {
		cout << el << endl;
	}

	auto& [myVal4, myVal5, myVal6] = arr;
	myVal4 = 10;
	myVal5 = 20;
	myVal6 = 30;

	for (auto& el : arr) {
		cout << el << endl;
	}

	return 0;
}