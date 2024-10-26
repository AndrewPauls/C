/* version 2 of inputCopy
 *
 * copied from Kernighan and Ritchies The C Programming Language
 *
 * October 25, 2024
 */

#include <stdio.h>

main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
