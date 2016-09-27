//------------------------------------------------------------------
//   File:        Stuff.c
//
//   Functions:
//                main()               
//-------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------------------
//   Function:    main()
//
//   Title:       Does nothing
//
//   Description: 
//                Calculates and displays stuff
//
//   Programmer:  Thomas Nishimura
//   
//   Date:        9/22/16
// 
//   Version:     1.0
//  
//   Environment: Intel Xeon PC 
//                Software:  OS: MS Windows 10  
//                Compiles under Microsoft Visual Studio.Net 2015
//
//   Input: 	  stuff from Console
//   Output:      Screen display of stuff
//
//   Calls:       
// 
//   Returns:     EXIT_SUCCESS (successful execution)
//
//   History Log:
//                10/31/16  TN completed version 1.0
//                3/28/05  TN completed version 1.1
//                1/03/11  TN completed minor adjustments version 1.11
// ------------------------------------------------------------------------------
int main(void)
{
	int cacaoPercentage = 0;
	float costInDollars = 0.0f;

	printf("Please enter percentage of cacao desired: ");
	printf("Percentage of cacao is %d%%\n", &cacaoPercentage);
	// scanf("");

	getchar();
	return EXIT_SUCCESS;
}