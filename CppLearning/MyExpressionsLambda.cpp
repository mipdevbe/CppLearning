#include "MyExpressionsLambda.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int mainExpressionsLambda()
{
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

	return 0;
}