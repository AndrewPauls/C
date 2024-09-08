/* array1.C
   A program that does 3 things
	- defines and simultaneously initializes an array of ints, printing to screen
	- defines and then via a loop assigns values to array, printing to screen afterwards
	- defines and then manually assigns ints to the array, printing to screen afterwards */

#include <stdio.h>			/* our only pre-processor directive is stdio */

main() 
{
	int a1[] = {1, 2, 3, 4, 5};
	int a2[5];
	int a3[5];

	/* 1. print a1 to screen */
	printf("a1 contains, in order: %d %d %d %d %d\n", a1[0], a1[1], a1[2], a1[3], a1[4]);




	/* 2.with a loop, assign values to the 5 cells of a2 */
	for (int i = 0 ; i < 5 ; i++)
	{
	  a2[i] = i * 2;		/* assign value of the index times 2 */
	}
	printf("a2 contains, in order: %d %d %d %d %d\n", a2[0], a2[1], a2[2], a2[3], a2[4]);




	/* 3. manually assign values  to the 5 cells of a3 */
	a3[0] = 10;
	a3[1] = 11;
	a3[2] = 12;
	a3[3] = 13;
	a3[4] = 14;
	printf("a3 contains, in order: %d %d %d %d %d\n", a3[0], a3[1], a3[2], a3[3], a3[4]);

	
	return 0;
}