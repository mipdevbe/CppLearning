#include "MyConcurrency.h"
#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

mutex m;

void myFunction(const string& param)
{
	for (int i = 0; i < 5; i++)
	{
		lock_guard<mutex> lg(m);
		cout << "Execution de la fonction depuis le " << param << "\n";
	}
}

int mainConcurrency()
{
	cout << " *** Concurrency section ***\n";

	thread t1(myFunction);
	thread t2(myFunction);

	t1.join();
	t2.join();

	return 0;
}
