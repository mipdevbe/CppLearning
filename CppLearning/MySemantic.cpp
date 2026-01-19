#include "MySemantic.h"

class MySemanticClass
{
public:
	MySemanticClass()
	{

	}

	MySemanticClass(MySemanticClass&& other) noexcept // move constructor
	{

	}

	MySemanticClass& operator=(MySemanticClass& other) {
		return *this;
	}

};
int mainSemantic()
{
	return 0;
}