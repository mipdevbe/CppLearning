#include "MySmartPointer.h"
#include <iostream>
#include <memory>

using namespace std;

class MyClassSmart {
private:
	int x;
	double d;

public:
	MyClassSmart(int xx, double dd) : x{ xx }, d{ dd } {
		cout << "MyClassSmart constructor called." << endl;
	}

	virtual ~MyClassSmart() {
		cout << "MyClassSmart destructor called." << endl;
	}

	void printValues() const {
		cout << "x: " << x << ", d: " << d << endl;
	}

};

class MyBaseSmart {
public:
	virtual ~MyBaseSmart() {
		cout << "MyBaseSmart destructor called." << endl;
	}

	virtual void doWork() = 0;
};

class MyDerivedSmart : public MyBaseSmart {
public:

	void doWork() override {
		cout << "MyDerivedSmart doing work." << endl;
	}
};

class MySecondaryDerivedSmart : public MyBaseSmart {

public:

	void doWork() override {
		cout << "MySecondaryDerivedSmart doing work." << endl;
	}

	void additionalFunction() {
		cout << " MySecondaryDerivedSmart additional function." << endl;
	}
};

int mainSmartPointer()
{
	// Smart pointer example
	unique_ptr<int> p = make_unique<int>(123);
	cout << "Smart pointer value: " << *p << endl;

	unique_ptr<MyClassSmart> pMyClass = make_unique<MyClassSmart>(42, 3.14);
	pMyClass->printValues();

	shared_ptr<int> pShared1 = make_shared<int>(456);
	shared_ptr<int> pShared2 = pShared1; // shared ownership
	shared_ptr<int[]> pShared3(new int[5]{1, 2, 3, 4, 5});

	cout << "Shared pointer values: " << *pShared1 << ", " << *pShared2 << ", " << pShared3[0] << endl;
	cout << "Shared pointer use count: " << pShared1.use_count() << endl;
	cout << "Shared pointer array fourth element: " << pShared3[3] << endl;

	unique_ptr<MyBaseSmart> pBase = make_unique<MyDerivedSmart>();
	pBase->doWork();

	unique_ptr<MyBaseSmart> pBase2 = make_unique<MySecondaryDerivedSmart>();	
	pBase2->doWork();

	// pBase2->additionalFunction(); // This will cause a compile-time error

	return 0;
}