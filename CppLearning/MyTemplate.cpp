#include "MyTemplate.h"
#include "MyEnum.h"

// Specialization of getValue for int type
template<>
int MyTemplate<int>::getValue() const
{
	cout << "Specialized getValue for int called." << endl;
	return value;
}

int mainTemplate()
{

	// Template class example
	MyTemplate<int> myIntTemplate(42);
	cout << "MyTemplate value (int): " << myIntTemplate.getValue() << endl;
	MyTemplate<string> myStringTemplate("Hello Template");
	cout << "MyTemplate value (string): " << myStringTemplate.getValue() << endl;

	MyEnum myEnum = MyEnum::mySecondValue;

	return 0;
}