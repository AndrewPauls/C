/* sizeOfOp.C
   using the sizeof operator on a variety of C variables */

#include <stdio.h>
main()
{
	printf("Size of int: %d\n", (int) sizeof(int));
	printf("Size of double: %d\n", (int) sizeof(double));
	printf("Size of bool: %d\n", (int) sizeof(bool));
	printf("Size of float: %d\n", (int) sizeof(double));
	printf("Size of long long: %d\n", (int) sizeof(long long));
	return 0;
}