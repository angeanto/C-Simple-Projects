// CountingWords.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<sstream>
using namespace std; 
using std::endl; 

int main()
{

	string line, word;
	getline(cin, line);
	stringstream ss(line);
	int word_count = 0;
	while (getline(ss, word, ' ')) word_count += word.length() ? 1 : 0;

	cout << "Number of words= " << word_count<< endl; 



	cin.get();
    return 0;
}
