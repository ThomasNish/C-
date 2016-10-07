//-------------------------------------------------------------------------------------------
//	File: Project1.c
//
// Functions: Main(), rounding()
//
//-------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//Declaring my constants
const double MULTIPLIER = 100.0;
const long long CHANGEINTWENTY = 2000;
const long long CHANGEINTEN = 1000;
const long long CHANGEINFIVE = 500;
const long long CHANGEINONE = 100;

const long long CHANGEINQUARTERS = 25;
const long long CHANGEINDIMES = 10;
const long long CHANGEINNICKLES = 5;
const long long CHANGEINPENNIES = 1;

// Initilizing my function
double rounding(double amountgiven);
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
//                     Software: Windows 10, Visual Studios 2015
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
	// Declaring all of my double variables dealing with purchase and tendered
	double amountPurchased = 0.00;
	double amountTendered = 0.00;
	double amountofChange = 0.00;
	long long amountofChangeinCents = 0;
	double amounfofChangeDue = 0.00;
	long long amountofChangeDueinCents = 0;
	double ABSofChange = 0.00;

	// Declaring my int dealing with incrimental growth based off of change needed
	long numofTwenty = 0;
	int numofTen = 0;
	int numofFive = 0;
	int numOne = 0;

	int numofQuarter = 0;
	int numofDimes = 0;
	int numofNickles = 0;
	int numofPennies = 0;

	int leftovers = 0;

	printf("Welcome to Change Counter by Thomas Nishimura\n\n");

	// Getting user input for amount purchased
	printf("\tPlease enter the total amount of purchase(in dollars): $");
	scanf_s("%lf", &amountPurchased);

	/*
	// Dealing with if users entered a letter anywhere in their input
	if (isdigit((int)amountPurchased))
		;
	else
	{
		printf("\tYou entered a letter.\n");
		return EXIT_FAILURE;
	}
	*/
	amountPurchased = rounding(amountPurchased);
	//amountPurchased = (((amountPurchased * MULTIPLIER) + 0.5) / MULTIPLIER);
	printf("\t%.2lf", amountPurchased);

	// Getting user input for amount of money paid
	printf("\n\tPlease enter amount of money tendered: $");
	scanf_s("%lf", &amountTendered);

	/*
	// Dealing with if users enter a letter anywhere in their input
	if (isdigit((int)amountTendered))
		;
	else
	{
		printf("\tYou entered a letter.\n");
		return EXIT_FAILURE;
	}
	*/
	amountTendered = rounding(amountTendered);
	printf("\t%.2lf\n", amountTendered);
	amountofChange = (amountTendered - amountPurchased);

	amounfofChangeDue = fabs(amountTendered - amountPurchased);
	amountofChangeDueinCents = (long long)(amounfofChangeDue * 100 + .5);
	ABSofChange = fabs(amountofChange);

	// Handling if user did not enter enough money.
	if (amountTendered < amountPurchased)
	{
		printf("\n\tYou did not enter enough money.");
		printf("\n\tYou still owe $%.2lf\n", ABSofChange);

		// Doing the calculation of amount due for each of the options given, then moving to the next lowest amount.
		numofTwenty = (long)amountofChangeDueinCents / CHANGEINTWENTY;
		leftovers = (int)amountofChangeDueinCents % CHANGEINTWENTY;
		printf("\n\tTwenties : %ld", numofTwenty);

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
		printf("\n\tPennies  : %d\n", numofPennies);
		return 0;
	}


	printf("\n\t%.2lf", ABSofChange);
	amountofChangeinCents = (long long)(amountofChange * 100 + .5);
	printf("\n\t-------------------------------------------");

	// Doing the calculation of change for each of the options given, then moving to the next lowest amount
	numofTwenty = (long)amountofChangeinCents / CHANGEINTWENTY;
	leftovers = amountofChangeinCents % CHANGEINTWENTY;
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
	while(getchar() != '\n')
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
// Returns: double amountgiven
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
double rounding(double amountgiven)
{
	return floor((amountgiven * MULTIPLIER) + 0.5) / (MULTIPLIER);
}
