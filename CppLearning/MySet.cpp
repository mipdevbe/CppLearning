#include "MySet.h"
#include <iostream>
#include <set>

using namespace std;

int mainSet()
{
	set<int> mySet = { -10, 1, 3, 5, -20, 6, 9, 15 };

	for (auto el : mySet)
	{
		cout << el << "\n";
	}

	mySet.insert(-5);
	mySet.insert(30);
	mySet.insert(6);

	for (auto el : mySet)
	{
		cout << el << "\n";
	}

	cout << "Set size : " << mySet.size() << endl;

	int findValue = 5;
	auto foundIt = mySet.find(findValue);
	if (foundIt != mySet.end())
	{
		cout << "Found it\n";
		mySet.erase(foundIt);
		cout << "Element erased\n";
	}
	else
	{
		cout << "Element not found\n";
	}


	for (auto el : mySet)
	{
		cout << el << "\n";
	}


	cout << "Set cleaned up\n";
	mySet.clear();

	if (mySet.empty())
	{
		cout << "Set is empty\n";
	}
	else
	{
		cout << "Set is not empty\n";

	}

	return 0;
}