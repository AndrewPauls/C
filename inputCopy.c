/* file copied for learning purposes from Ritchie and Kernighans "The C 
 * 	Programming Language"
 *
 * October 25, 2024
 *
 */

#include <stdio.h>

/* copy input to output, version 1 */
main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

