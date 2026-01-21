#include "MyExpressionsLambda.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int mainExpressionsLambda()
{
	cout << " *** Expressions Lambda section ***\n";

	vector<int> v = { 5, 10, 4, 1, 3, 15 };
	sort(v.begin(), v.end(), [](int x, int y) { return x > y; });

	for (const auto& el : v)
	{
		cout << el << "\n";
	}

	int myCount = count_if(v.begin(), v.end(), [](int x) { return x % 2; });
	cout << "Number of odd elements : " << myCount;

	int x = 123;

	cout << "Local value = " << x << endl;
	auto myLambda = [&x]() { x++; };

	myLambda();

	cout << "The lambda has taken and loaded the local variable : " << x << endl;
	cout << "The lambda has taken and loaded the local variable : " << x << endl;

	return 0;
}