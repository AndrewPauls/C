/* code for exercise 1.6 in Ritchie and Kernighans The C Programming Language
 *
 * written by Andrew Pauls
 * October 24, 2024
 *
 */

#include <stdio.h>

/* checks that the expression getchar() != EOF is 0 or 1 */
main()
{
	char c;

	while (c = getchar() != EOF) {
		putchar(c);
		printf("Value of c = getchar() != EOF is: %d\n", (c=getchar() != EOF));
	}
}


