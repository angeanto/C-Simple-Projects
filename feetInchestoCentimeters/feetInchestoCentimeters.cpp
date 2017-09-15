// Feet and Inches to m and cm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std; 
using std::cout; 
using std::cin;
using std::endl; 


void giveNumbers(double& giveFeet, double& giveInch);

void convertFunction(double& giveFeet2, double& giveInch2, double& metersGain2, double& cmetersGain2);

void showMeters(double& showResults1, double& showResults2);

int  main()

{
	double feetGive,inchGive;
	double metersGain, cmetersGain; 

	giveNumbers(feetGive, inchGive);

	convertFunction(feetGive, inchGive, metersGain,cmetersGain);

	showMeters(metersGain,cmetersGain); 
	

		return 0; 

}

void giveNumbers(double& giveFeet, double& giveInch)
{
	cout << "Give number of feet" << endl;
	cin >> giveFeet;


	cout << "Give number of inch" << endl;
	cin>> giveInch;


}

void convertFunction(double& giveFeet2, double& giveInch2,double& metersGain2,double& cmetersGain2)
{
		cmetersGain2 = (2.54 * giveInch2);

	     metersGain2 = (0.3048 * giveFeet2); 

}

void showMeters(double& showResults1 ,double& showResults2)
{

	cout << showResults1 *100 + showResults2  << "  " << "centimeters "<< endl; 
}
