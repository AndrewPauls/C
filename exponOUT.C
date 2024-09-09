/* exponOUT.C
   - program to declare an exponential value, print it to screen
   - perform a multiplication and division on the value, printing results to screen */

#include <stdio.h>
main() 	
{
	
	float worldPopulation = 8.05E+9; 					/* world population is approximately 8.05 billion (8,050,000,000) */
	printf("Population of the world is: %e\n", worldPopulation);		/* '/e' used to print very large or very small floating points in sci. notation */
	printf("Population of the world is: %g\n", worldPopulation);		/* '/g/ used to print floats, puts into sci. notation only if required */
	
	float doublePop = worldPopulation *2;
	float halfPop = worldPopulation / 2;

	printf("Populuation doubled: %e\n", doublePop);
	printf("Population halved: %e\n", halfPop);

	return 0;
}