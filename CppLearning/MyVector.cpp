#include "MyVector.h"

#include <iostream>
#include <vector>

using namespace std;

int mainVector()
{
	vector<int> v = { 10, 5, 8, 4, 1, 2 };

	v.push_back(15);
	v.push_back(30);

	for (auto el : v)
	{
		cout << el << "\n";
	}

	v.erase(v.begin() + 1); // erase the second element

	for (auto el : v)
	{
		cout << el << "\n";
	}

	int findNumber = 4;
	auto foundIt = find(v.begin(), v.end(), findNumber);

	if (foundIt != v.end())
	{
		cout << "Found it\n";
		v.erase(foundIt);
		cout << "Element erased\n";
	}
	else
	{
		cout << "Element not found\n";
	}

	for (auto el : v)
	{
		cout << el << "\n";
	}

	return 0;
}