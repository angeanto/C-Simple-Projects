// GasPump.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
using namespace std;
class GasPump
{
public:
	double costPerLitre,numberOfLitres,finalCharge;
	void costFunction();
	void amount();
	void totalCost();

};

int main()
{
	GasPump x;
    x.costFunction();
	x.amount();
	x.totalCost();
	
	 return 0;
}

void GasPump::costFunction()
{
	do
	{
		cout << "Please insert cost per litre between (minimum cost is 1 $,maximum cost is 2 $ )" << endl;
		cin >> costPerLitre;
		if ((costPerLitre > 2.0) || (costPerLitre < 1.0))
			cout << " Sell fuel in a logic price " << endl;
	
	} while ((costPerLitre > 2.0) || (costPerLitre < 1.0));
}


void GasPump::amount()
{
	
		cout << " Please insert number of litres to fill pressing enter. Each enter press is 0.5 L " << endl;
		cout << "Press 'P' to stop " << endl;
		numberOfLitres = 0;
		while ((numberOfLitres >= 0) && (numberOfLitres <= 50))
		{
			if (cin.get() == '\n')
				numberOfLitres = numberOfLitres + 0.5;
			else if (cin.get() != '\n')
				cout << "Invalid input" << endl;
            else if (cin.get() == 'P')
					break;
			cout << numberOfLitres-0.5;
		
		}
		}

	
void GasPump::totalCost()
{
	finalCharge = (numberOfLitres-0.5) * costPerLitre;
	cout << " You owe  " << finalCharge << " dollars" << endl;
}
