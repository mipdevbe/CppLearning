#pragma once
#include <iostream>
using namespace std;

// A simple template class that holds a value of any type T
template <typename T>
class MyTemplate
{
private:
	T value;
public:

	MyTemplate(T val) : value{ val } {}

	T getValue() const;
};

template<typename T>
T MyTemplate<T>::getValue() const {
	cout << "Generic getValue called." << endl;
	return value;
}

// optional: forward-declare the specialization so callers know it exists
template<>
int MyTemplate<int>::getValue() const;


