#include "MyStandardLibrary.h"
#include <iostream>
#include <vector>
#include <array>
#include <set>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

int mainStandardLibrary()
{
	vector<int> numbers = { 1, 2, 3, 4, 5 };
	for (const auto& num : numbers) {
		cout << "Number: " << num << endl;
	}

	cout << numbers.size() << " numbers in the vector." << endl;

	array<int, 5> fixedArray = { 10, 20, 30, 40, 50 };
	for (const auto& val : fixedArray) {
		cout << "Value: " << val << endl;
	}

	// Using set to store unique elements
	cout << "Demonstrating set for unique elements:" << endl;
	set<int> uniqueNumbers = { 1, 2, 2, 3, 4, 4, 5 };
	uniqueNumbers.insert(6);
	uniqueNumbers.insert(3); // Duplicate, will not be added
	for (const auto& uniqueNum : uniqueNumbers) {
		cout << "Unique Number: " << uniqueNum << endl;
	}

	map<int, char> idToCharMap = { {1, 'a'}, {2,'c'} };
	for (const auto& pair : idToCharMap) {
		cout << "ID: " << pair.first << ", Char: " << pair.second << endl;
	}

	cout << idToCharMap[1] << endl;

	idToCharMap.insert({ 3, 'e' });
	cout << "Map size: " << idToCharMap.size() << endl;

	auto search = idToCharMap.find(2);
	if (search != idToCharMap.end()) {
		cout << "Found ID 2 with Char: " << search->second << endl;
	} else {
		cout << "ID 2 not found in the map." << endl;
	}

	pair<int, string> myPair = make_pair(1, "One");
	cout << "Pair - First: " << myPair.first << ", Second: " << myPair.second << endl;

	vector<int> vec1 = { 1, 2, 3 };
	for (auto it = vec1.begin(); it != vec1.end(); it++) {
		cout << "Vector element: " << *it << endl;
	}
	
	auto it = vec1.begin() + 1;
	vec1.erase(remove(vec1.begin(), vec1.end(), *it), vec1.end());
	cout << "After erasing second element:" << endl;
	for (const auto& val : vec1) {
		cout << "Vector element: " << val << endl;
	}


	return 0;
}