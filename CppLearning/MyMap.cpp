#include "MyMap.h"

#include <iostream>
#include <map>
#include <string>

using namespace std;

int mainMap()
{
	map<char, int> m = { {'a', 1}, {'b', 5}, {'e', 10}, {'f', 10} };

	for (const auto& el : m)
	{
		cout << el.first << " " << el.second << "\n";
	}

	map<string, int> m2 = { 
							{"red", 1}, 
							{"green", 20}, 
							{"blue", 15}
						  };

	m2.insert({ "magenta", 4 });
	m2["yellow"] = 5;

	for (const auto& el : m2)
	{
		cout << el.first << " " << el.second << "\n";
	}

	string findValue = "red";
	auto foundIt = m2.find(findValue);
	if (foundIt != m2.end())
	{
		cout << "Found it\n";
		m2.erase(foundIt);
		cout << "Element erased\n";
	}
	else
	{
		cout << "Element not found\n";
	}

	for (const auto& el : m2)
	{
		cout << el.first << " " << el.second << "\n";
	}


	return 0;
}