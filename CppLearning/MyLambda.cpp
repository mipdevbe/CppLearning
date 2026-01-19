#include "MyLambda.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class MyClass2 {
public:
	void operator()() const {
		cout << "MyClass2 functor called." << endl;
	}
};

class MyClass3 {
public:
	void operator()(int x) const {
		cout << "MyClass3 functor called with value: " << x << endl;
	}
};

class MyClass4 {
public:
	bool operator()(int x) const {
		if (x % 2 == 0) {
			cout << x << " is even." << endl;
			return true;
		} else {
			cout << x << " is odd." << endl;
			return false;
		}
	}
};

int mainLambda()
{
	MyClass2 functor;
	functor();

	MyClass3 functorWithParam;
	functorWithParam(42);

	MyClass4 isEvenFunctor;
	bool isEven = isEvenFunctor(10);
	if (isEven) {
		cout << "The number is even." << endl;
	} else {
		cout << "The number is odd." << endl;
	}

	auto lambdaNoParam = []() {
		cout << "Lambda with no parameters called." << endl;
		};
	lambdaNoParam();
	auto lambdaWithParam = [](int x) {
		cout << "Lambda with parameter called: " << x << endl;
		};
	lambdaWithParam(99);

	auto lambdaReturnBool = [](int x) -> bool {
		if (x > 0) {
			cout << x << " is positive." << endl;
			return true;
		} else {
			cout << x << " is non-positive." << endl;
			return false;
		}
	};

	bool isPositive = lambdaReturnBool(-5);
	if (isPositive) {
		cout << "The number is positive." << endl;
	} else {
		cout << "The number is non-positive." << endl;
	}

	int x = 10;
	// 
	auto lambdaCaptureByValue = [x]() {
		//x = 20; // Error: cannot modify captured variable
		cout << "Lambda capturing by value: x = " << x << endl;
	};
	lambdaCaptureByValue();

	auto lambdaCaptureByReference = [&x]() {
		x = 20; // Modify the original variable
		cout << "Lambda capturing by reference: x = " << x << endl;
	};
	lambdaCaptureByReference();

	int a = 15;
	int b = 25;

	auto lambdaCaptureAllValues = [=]() {
		cout << "Lambda capturing all by value: a = " << a << ", b = " << b << endl;
	};
	lambdaCaptureAllValues();

	auto lambdaCaptureAllByValue = [a, b]() {
		cout << "Lambda capturing all by value: a = " << a << ", b = " << b << endl;
		};
	lambdaCaptureAllByValue();

	vector<int> v4 = { 1, 2, 3, 4, 5 };
	auto countEven = count_if(v4.begin(), v4.end(), [](int x) { return x % 2 == 0; });
	cout << "The amount of odd number is " << countEven;

	return 0;
}