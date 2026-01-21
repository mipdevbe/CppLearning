#include "MyUnorderedMap.h"
#include <iostream>
#include <unordered_map>

using namespace std;

int mainUnorderedMap()
{
	cout << " *** Unordered Map section ***\n";

	unordered_map<char, int> unorderedMap = { {'a', 1}, {'b', 2}, {'c', 5}};
	unorderedMap.insert({ 'd', 10 });

	for (const auto& el : unorderedMap)
	{
		cout << el.first << "" << el.second << "\n";
	}

	unorderedMap['b'] = 4;
	unorderedMap['e'] = 15;

	for (const auto& el : unorderedMap)
	{
		cout << el.first <<  "" << el.second << "\n";
	}

	return 0;
}
