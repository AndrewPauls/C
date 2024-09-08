/* perimeterCalculator.C
   A very simple program to calculate the perimeter of a rectangle with user specified length, width */

#include <stdio.h>

main () 
{
	float length, width, perimeter;			/* dimensions to be stored as floats */
	
	/* acquire the dimensions from the user with a prompt */
	printf("In this program, you will enter the dimensions of a rectangle and its perimeter will be returned back to you.\n");
	printf("Please enter the length of the rectangle to two decimal points now.\n");
	scanf(" %f", &length);
	printf("Please enter the width of the rectangle to two decimal points now.\n");
	scanf(" %f", &width);

	/* compute necessary maths for perimeter calculation */
	perimeter = (2*length) + (2*width);
	
	/* return to user the perimeter of the specified rectangle */
	printf("The perimeter of a rectangle with length %f and width %f is:\t%f", length, width, perimeter);
	return 0;
}