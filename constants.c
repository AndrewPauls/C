/* here we play around with constants, defining and printing different values to see what we get.
 *
 * written by andrew pauls
 * october 13, 2024
 * happy birthday grandma! 84 years young
 */

#include <stdio.h>

main()
{
	int int1, int2, int3;
	float float1, float2;
	char c1, c2;

	int1 = 10009;
	int2 = 100000009L;
	int3 = 100000009UL;

	float1 = 123e-2;
	float2 = 123456789L;

	printf("int1: %d.\nint2: %d.\nint3: %d.\n", int1, int2, int3);
	printf("float1: %f.\nfloat2: %f.\n", float1, float2);


	c1 = '\110';
	printf("char c1: %d\n", c1);

	c2 = '\xa3';
	printf("\nchar c2: %d\n", c2);
}	

