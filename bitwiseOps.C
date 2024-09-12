/* bitwiseOps.C
   Plays around with the bitwise operators, prints to screen */

#include <stdio.h>

main()
{
	int number;
	number = 9 & 14;
	printf("Value of number: %d\n", number);
	printf("The value of 9 & 14 is 8 because we are anding the bits of 9 and 14. 9 = 1001, 14 = 1110, for 1000 result\n");

	number = 9|14;
	printf("Value of 9|14 is: %d. This is because we are oring 1001 and 1110, for 1111 (15)\n", number);

	
	number = 9^14;
	printf("Value of 9^14 is %d. This is because we are XORing 1001 and 1110, for 0111\n", number);

	number = ~9;
	printf("Value of ~9 is %d. This is becuase we are ones complementing 1001, for 0110", number);
	return 0;
}