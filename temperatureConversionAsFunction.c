/* a program to compute temperature conversions from fahrenheit to celsius using a function
 *
 * program is the solution to exercise 1.15 from Ritchie and Kernighans 'The C Programming
 * 	Language
 *
 * program written by Andrew Pauls
 * October 28, 2024
 *
 */

#include <stdio.h>

int fahr2cels(int fahr);

main()
{

	// tests the fahr2cels function
	int fahr, cels, step, min, max;
	min = -100;
	max = 100;
	step = 20;

	for (fahr = min; fahr <= max; fahr+=step){
		cels = fahr2cels(fahr);
		printf("%6d -> %6d\n", fahr, cels);
	}
}

int fahr2cels(int fahr) 
{
	return ((5.0/9.0) * (fahr - 32));
}

