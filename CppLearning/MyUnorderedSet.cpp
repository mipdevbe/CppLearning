#include "MyUnorderedSet.h"
#include <iostream>
#include <unordered_set>

using namespace std;


int mainUnorderedSet()
{
	cout << " *** Unordered Set section ***\n";

	unordered_set<int> myunorderedSet = { 1, 2, 5, -4, 7, 10 };
	myunorderedSet.insert(6);
	myunorderedSet.insert({ 8, 15, 20 });

	for (const auto& el : myunorderedSet)
	{
		cout << el << "\n";
	}

	myunorderedSet.erase(-4);
	for (const auto& el : myunorderedSet)
	{
		cout << el << "\n";
	}

	return 0;
}