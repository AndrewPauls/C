/* IncDecOps.C
   Showcases the increment and decrement operators, how they can be important on final results during calculations */


#include <stdio.h>
main ()
{
	int origin = 10;
	int modified = origin;
	int counter;

	/* show off the increment operators */
	for ( counter = 0 ; counter < 20 ; counter++ ) 			/* showcasing first increment */
	{
	   printf(" %d, ", counter);
	}
	
	printf("\n");

	/* show off the decrement operators */
	for ( counter = 20; counter > 0; counter--)
	{
	   printf(" %d, ", counter);
	}


	printf("\n");
	



	/* ok, now lets show that the actual operator makes a difference (ex. g++ or ++g) */
	int a = ++origin + 5;
	printf("Value of a: %d. Here, we increment origin to 11, and then add 5.\n", a);
	
	origin = 10;
	a = origin++ + 5;
	printf("Value of a: %d. Here, we add origin = 10 to 5, and assign 15 to a. Then, we increment origin to 11.\n", a);




	return 0;
} 