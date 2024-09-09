/* octalOUTPUT.C 
   defines some octal integers, prints to display */

#include <stdio.h>
main() 
{
	int o1 = 030;
	int o2 = 040;
	int o3 = 041;		/* octals signified as ints with leading 0 */

	int i1 = 30;
	int i2 = 40;
	int i3 = 41;		/* for demonstration purposes, we have some regular, non leading zero integers */
	
	/* print to screen */
	printf("Octals, in order, are: %o, %o, %o\n", o1, o2, o3);
	printf("Ints, in order, are:   %d, %d, %d\n", i1, i2, i3);
	
	return 0;
}