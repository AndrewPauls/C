/* floatOUT.C
   prints float output to standard out through a variety of methods, formats a variety of ways */

#include <stdio.h>
main() 
{
	printf("You can print floats just like this. Here is the float %f\n", 100.00);
	printf("Note that the above output has the float 100.00 with a bunch of unecessary extra zeros\nThankfully, C lets us format floats how we like. Observe the following: \n");
	printf("Float 100.00, formatted to 1, 2, and 3 decimals: %6.1f, %6.2f, %6.3f", 100.00, 100.00, 100.00);
	 

	/* you can also change the number of leading zeroes floats should have. */
	float value = 1492.4932;
	printf("Printing value with 25 leading zeros and two decimal places: %25.2f", value);
	printf("\nPrinting value with 5 leading zeros and three decimal places: %5.3f", value);
	printf("\nPrinting value with 3 leading zeros and 5 decimal places: %3.5f", value);
	return 0;
}