// airSeats.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>	
#include<iomanip>
using namespace std;

int main()
{
	int row , column ;
	int matrix1[7][1];

	for (row = 0; row < 7; row++)
	{
		matrix1[row][0] = row + 1;
	}
	char matrix2[7][5];
	for (row = 0; row < 7; row++)
	{
		matrix2[row][0] = 'A';
		matrix2[row][1] = 'B';
		matrix2[row][2] = char(32);
		matrix2[row][3] = 'C';
		matrix2[row][4] = 'D';
	}
	cout << " Please choose a seat" << endl;
	for (row = 0; row < 7; row++)
	{
		cout << row + 1 << " ";
		for (column = 0; column < 5; column++)
			cout <<matrix2[row][column];
		    cout << endl;
	}
	
	int full = 0;

	while (full != 28)
	{
		int row ;
		cout << "Choose row" << endl;
		cin >> row;
		if (row > 7)
		{
			cout << "Invalid number" << endl;
			continue;
		}
		
		cout << "Choose column" << endl;
		cin >> matrix2[row][column];
		if ((matrix2[row][column] != 'A') && (matrix2[row][column] != 'B') && (matrix2[row][column] != 'C') && (matrix2[row][column] != 'D'))
		{
			cout << " Invalid column" << endl;
			continue;
		}
		switch (matrix2[row][column])
		{
		case 'A':
			matrix2[row-1][0] = 'X';
			full = full + 1;
			break;
		case  'B':
			matrix2[row-1][1] = 'X';
			full = full + 1;
			break;
		case 'C': 
			matrix2[row-1][3] = 'X';
			full = full + 1;
			break;
		case 'D':
			matrix2[row-1][4] = 'X';
			full = full + 1;
			break;

			
		}



		for (row = 0; row < 7; row++)
		{
			cout << row + 1 << " ";
			for (column = 0; column < 5; column++)
				cout << matrix2[row][column];
			cout << endl;
		}


		cout << 28 - full << "Remaining seats" << endl;


	}
	if (full == 28)
		cout << " There are no available tickets" << endl;



	


  
return 0;
}


				
			

