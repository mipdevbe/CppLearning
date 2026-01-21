#include "MyConcurrency.h"
#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

mutex gmutex;

void MyFunction(const string& param)
{
	for (int i = 0; i < 5; i++)
	{
		lock_guard<mutex> lg(gmutex);
		cout << "Execution de la fonction depuis le " << param << "\n";
	}
}

int mainConcurrency()
{
	cout << " *** Concurrency section ***\n";

	thread t1(MyFunction, "Thread 1");
	thread t2(MyFunction, "Thread 2");

	t1.join();
	t2.join();

	return 0;
}
