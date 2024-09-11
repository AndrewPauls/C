/* conditionalOp.C
   A program that makes use of the '?:' conditional operator */

#include <stdio.h>

main()
{
	long var1 = 444444444L;
	long var2 = 555555555L;
	
	printf("Size of var1 in bytes: \t %zu\n", sizeof(long));
	var1 < var2 ? printf("var 1 smaller than var2") : printf("var1 not smaller than var2");
	return 0;
} 