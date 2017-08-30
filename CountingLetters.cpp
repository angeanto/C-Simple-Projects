// CountingLetters.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include<sstream>
using namespace std;
using std::endl;

int main()
{
	string line, word;

	int spaces = 0; 

	getline(cin, line);

	stringstream ss(line);

	while (getline(ss, word, ' '))

		spaces++; 	

	cout << " Number of characters is " << line.length() - spaces << endl; 

	cout << "Space detected " << spaces <<  " times"<<  endl;

	cin.get();
	return 0;
}
