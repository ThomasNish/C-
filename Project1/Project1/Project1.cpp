//-------------------------------------------------------------------------------------------
//	File: Project1.c
//
// Functions: Main
//
//-------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double MULTIPLIER = 100.0;
const long long CHANGEINTWENTY = 2000;
const long long CHANGEINTEN = 1000;
const long long CHANGEINFIVE = 500;
const long long CHANGEINONE = 100;

const long long CHANGEINQUARTERS = 25;
const long long CHANGEINDIMES = 10;
const long long CHANGEINNICKLES = 5;
const long long CHANGEINPENNIES = 1;
//----------------------------------------------------------------------------
//	Function: main
//
// Title: Project1
//
//	Description: Gets user input and displays correct change
// 
//
// Programmer: Thomas Nishimura
// 
// Date: 9/27/2016
// Version: 1.0
//
//	Environment:
//                     Hardware: Dell 
//
//                      Software: Windows 10, Visual Studios 2015
//
//	Input: Amount of payment
//
//	Output: Tendered Change
//
//	Parameters: void
// 
//
// Returns: success code
// 
// 
//	Called By: n/a
// 
//	Calls: n/a
//
//	History Log:
//
// 
//----------------------------------------------------------------------------
int main(void)
{
	double rounding(int amountgiven);

	double amountPurchased = 0.00;
	double amountTendered = 0.00;
	double amountofChange = 0.00;
	
	long long numofTwenty = 0;
	long long numofTen = 0;
	long long numofFive = 0;
	long long numOne = 0;

	long long numofQuarter = 0;
	long long numofDimes = 0;
	long long numofNickles = 0;
	long long numofPennies = 0;

	printf("Welcome to Change Counter by Thomas Nishimura\n\n");

	// Getting user input for amount purchased
	printf("\tPlease enter the total amount of purchase(in dollars): $");
	scanf_s("%lf", &amountPurchased);
	amountPurchased = rounding(amountPurchased);
	printf("\t%.2lf", amountPurchased);

	// Getting user input for amount of money paid
	printf("\n\tPlease enter amount of money tendered: $");
	scanf_s("%lf", &amountTendered);
	amountTendered = rounding(amountTendered);
	printf("\t%.2lf", amountTendered);
	printf("\n");
	
	// Handling if user did not enter enough money
	if (amountTendered < amountPurchased)
		printf("You did not enter enough money");


	amountofChange = amountPurchased - amountTendered;
	printf("\n\t%.2lf", amountofChange);
	
	// Doing the calculation of change
	numofTwenty = (int)amountofChange % CHANGEINTWENTY;
	


	getchar();
	return EXIT_SUCCESS;
}

//----------------------------------------------------------------------------
//	Function: rounding
//
// Title: Project1
//
//	Description: Gets user input and displays correct change
// 
//
// Programmer: Thomas Nishimura
// 
// Date: 9/27/2016
// Version: 1.0
//
//	Environment:
//                     Hardware: Dell 
//
//                      Software: Windows 10, Visual Studios 2015
//
//	Input: Amount of payment
//
//	Output: none
//
//	Parameters: int amountgiven
// 
//
// Returns: amount given
// 
// 
//	Called By: main()
// 
//	Calls: n/a
//
//	History Log:
//
// 
//----------------------------------------------------------------------------
double rounding(int amountgiven)
{
	floor(amountgiven * MULTIPLIER + .5);
	return amountgiven;
}