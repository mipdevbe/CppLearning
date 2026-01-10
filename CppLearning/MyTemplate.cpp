#include "MyTemplate.h"

// Specialization of getValue for int type
template<>
int MyTemplate<int>::getValue() const
{
	cout << "Specialized getValue for int called." << endl;
	return value;
}