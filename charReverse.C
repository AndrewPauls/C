/* charReverse.C
   A simple C program that accepts 3 characters from the user, prints them in reverse */

#include <stdio.h>
main() 
{
	char c1, c2, c3;		/* we will hold the three chars in their own var's */
	
	/* ask user for their input, save the input */
	printf("Please enter three characters.\n");
	scanf(" %c %c %c", &c1, &c2, &c3);
	
	/* return the users initial response to display */
	printf("You entered: %c %c %c\n", c1, c2, c3);
	
	/* reverse the order and return to display */
	printf("Reversed: %c %c %c", c3, c2, c1);

	return 0;
}


