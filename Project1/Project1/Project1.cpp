// File: counter.c
// 
// Functions:
//		main()
//---------------------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------
//   Function:    main()
//
//   Title:       Calculates Change based off of payment
//
//   Description: 
//                Calculates and displays change
//
//   Programmer:  Thomas Nishimura
//   
//   Date:        9/27/16
// 
//   Version:     1.0
//  
//   Environment: Intel Xeon PC 
//                Software:  OS: MS Windows 10  
//                Compiles under Microsoft Visual Studio.Net 2015
//
//   Input: 	  Amount purchased
//   Output:      Change tendered
//
//   Calls:       
// 
//   Returns:     EXIT_SUCCESS (successful execution)
//
// -------------------------------------------------------------------
int main(void)
{
	double amountPurchased = 0;


	printf("Please enter the total amount of purchase: ");
	scanf("%d", &amountPurchased);
	printf("%d", amountPurchased);

	return EXIT_SUCCESS;
}