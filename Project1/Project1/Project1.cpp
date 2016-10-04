//-------------------------------------------------------------------------------------------
//	File: Project1.c
//
// Functions: Main(), rounding()
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
	double correctdecimal(int amount, int decimal);

	double amountPurchased = 0.00;
	double amountTendered = 0.00;
	double amountofChange = 0.00;
	double amountofChangeinCents = 0.00;

	long numofTwenty = 0;
	long numofTen = 0;
	long numofFive = 0;
	long numOne = 0;

	long numofQuarter = 0;
	long numofDimes = 0;
	long numofNickles = 0;
	long numofPennies = 0;

	int leftovers = 0;

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
	printf("\t%.2lf\n", amountTendered);
	
	amountofChange = (long)(amountTendered - amountPurchased);

	// Handling if user did not enter enough money
	if (amountTendered < amountPurchased)
	{
		printf("\n\tYou did not enter enough money");
		printf("\n\tYou still owe $%lf", amountofChange);
	}

	
	printf("\n\t%.2lf", amountofChange);
	
	printf("\n\t-------------------------------------------");

	// Doing the calculation of change
	numofTwenty = amountofChange / CHANGEINTWENTY;
	leftovers = (int)amountofChange % CHANGEINTWENTY;
	printf("\n\tTwenties : %d", numofTwenty);
	numofTen = leftovers / CHANGEINTEN;
	leftovers %= CHANGEINTEN;
	printf("\n\tTens	 : %d", numofTen);
	numofFive = leftovers / CHANGEINFIVE;
	leftovers %= CHANGEINFIVE;
	printf("\n\tFives	 : %d", numofFive);
	numOne = leftovers / CHANGEINONE;
	leftovers %= CHANGEINONE;
	printf("\n\tOne      : %d", numOne);
	numofQuarter = leftovers / CHANGEINQUARTERS;
	leftovers %= CHANGEINQUARTERS;
	printf("\n\tQuarters : %d", numofQuarter);
	numofDimes = leftovers / CHANGEINDIMES;
	leftovers %= CHANGEINDIMES;
	printf("\n\tDImes	 : %d", numofDimes);
	numofNickles = leftovers / CHANGEINNICKLES;
	leftovers %= CHANGEINNICKLES;
	printf("\n\tNickles  : %d", numofNickles);
	numofPennies = leftovers / CHANGEINPENNIES;
	leftovers %= CHANGEINPENNIES;
	printf("\n\tPennies  : %d", numofPennies);
	// total change should be $36.41
	

	


	printf("\n\t-------------------------------------------");

	printf("\nThank you for using Change Counter!\n");
	// Keeping the window open
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
//					9/26/16 tn1				created version 1.0 
//----------------------------------------------------------------------------
double rounding(int amountgiven)
{
	return floor((amountgiven * MULTIPLIER + .5) / 100.0);
}


