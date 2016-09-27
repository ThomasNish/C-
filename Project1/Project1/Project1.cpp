//-------------------------------------------------------------------------------------------
//	File: Project1.c
//
// Functions: Main
//
//-------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

//-------------------------------------------------------------------------------------------
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
	double amountPurchased = 0;


	printf("Please enter the total amount of purchase: ");
	scanf("%d", &amountPurchased);
	printf("%d", amountPurchased);

	return EXIT_SUCCESS;
}