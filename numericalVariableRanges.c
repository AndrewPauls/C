/* a program to determine the ranges of char, short, int, and long variables,
both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point
types.

written by Andrew Pauls
October 13, 2024
question taken from Kernighan and Ritchie's "The C Programming Language"
*/

#include <stdio.h>

main()
{

	char c;
	short s;
	int i;
	long l;
	
	unsigned uc;
	unsigned short us;
	unsigned int ui;
	unsigned long ul;

	printf("We will first attempt to determine the ranges for signed chars.\n");
	// a signed integer switches to being negative when the final 
	// bit becomes a 0.
	// I know that the switching point is around 1.147 billion
	// i will write a loop then that finds this point
	i = 214700000;
	int previousValue;
	while (1) {
		previousValue = i;
		i++;
		if (i < 0) {
		       	printf("Largest value of a signed int is: %d.\n", previousValue);
		break;
		}
		
	}

	// now, lets assess an unsigned
	// we know that the size of an integer in C, on this machine, is 32 bits. 
	// 2^32 -1 = 4294967296. So we can check the values around this value
	// to see if it is true than the max value for an unsigned int is
	// 4294967296
	ui = 4290000000;
	while (1) {
		previousValue = ui;
		++ui;
		if(ui == 0){
			printf("Maximum value of an unsigned int: %u.\n", previousValue);
			break;
		}
	}	

	// lets now look at chars
	// a char is represented by 1 byte in C
	// therefore a default char (signed), will have a range from -128 -> 127	// i will print all values of a char
	printf("Lets check out the range of chars now.\n");
	
	for (int a = -130 ; a < 130; ++a){
		c = a;
		printf("c = %d\n", c);
		++c;
	}
}

