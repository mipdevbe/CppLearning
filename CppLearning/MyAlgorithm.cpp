#include "MyAlgorithm.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int mainAlgorithm()
{
	cout << "Demonstrating descending sorting algorithm:" << endl;
	vector<int> numbers = { 5, 2, 9, 1, 5, 6 };
	sort(numbers.begin(), numbers.end(), greater<int>());
	cout << "Sorted numbers: ";
	for (const auto& num : numbers) {
		cout << num << " ";
	}
	cout << endl;

	auto it = find(numbers.begin(), numbers.end(), 5);
	if (it != numbers.end()) {
		cout << "Found number 5 at position: " << distance(numbers.begin(), it) << endl;
	} else {
		cout << "Number 5 not found." << endl;
	}

	auto it2 = find_if(numbers.begin(), numbers.end(), [](int n) { return n > 5; });
	if (it2 != numbers.end()) {
		cout << "First number greater than 5 is: " << *it2 << endl;
	} else {
		cout << "No number greater than 5 found." << endl;
	}

	vector<int> copy_from_vec = { 10, 20, 30, 40, 50 };
	vector<int> copy_to_vec(5);
	//copy(copy_from_vec.begin(), copy_from_vec.end(), copy_to_vec.begin());
	copy(copy_from_vec.begin(), copy_from_vec.begin() + 2, copy_to_vec.begin());
	cout << "Copied vector elements: ";
	for (const auto& val : copy_to_vec) {
		cout << val << " ";
	}
	cout << endl;

	vector<int> vecA = { 1, 2, 3 };
	auto itMax = max_element(vecA.begin(), vecA.end());
	cout << "Maximum element in vecA: " << *itMax << endl;

	auto itMin = min_element(vecA.begin(), vecA.end());
	cout << "Minimum element in vecA: " << *itMin << endl;

	return 0;
}