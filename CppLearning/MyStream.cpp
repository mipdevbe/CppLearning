#include "MyStream.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int mainStream()
{
	// Create and write to a file
	fstream fs("example.txt", ios::out);

	if (!fs) {
		cerr << "Error opening file for writing." << endl;
		return 1;
	}

	fs << "First line in the file." << endl;
	fs << "Second line in the file." << endl;
	fs << "Third line in the file." << endl;

	fs.close();

	// Read from the file in string mode
	string str;
	fs.open("example.txt", ios::in);
	while (fs) {
		getline(fs, str);
		if (fs) {
			cout << str << endl;
		}
	}
	fs.close();

	// Read from the file in char mode
	char c;
	fs.open("example.txt", ios::in);
	while (fs >> c) {
		cout << c;
	}
	cout << endl;
	fs.close();

	// Append to the file 
	fs.open("example.txt", ios::app);
	if (!fs) {
		cerr << "Error opening file for appending." << endl;
		return 1;
	}
	
	string s1 = "Appended line 1.\n";
	string s2 = "Appended line 2.\n";
	fs << s1 << s2 << endl;
	fs.close();

	// Read from the file in char mode no skipping whitespace
	fs.open("example.txt", ios::in);
	while (fs.get(c)) {
		cout << c;
	}
	cout << endl;
	fs.close();

	stringstream ss { "Hello World." };
	cout << ss.str() << endl;

	char c2 = 'A';
	int x = 123;
	double d = 45.67;
	stringstream ss2;
	ss2 << "Char: " << c2 << ", Int: " << x << ", Double: " << d << endl;	
	cout << ss2.str();

	string input = "100 200 300";
	stringstream ss3(input);
	int a, b, c3;
	ss3 >> a >> b >> c3;
	cout << "Read from stringstream: " << a << ", " << b << ", " << c3 << endl;

	return 0;
}
