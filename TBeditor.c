/* a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by //. This makes tabs and backspaces visible in an unambiguous way.
 *
 * program is the solution to exercise 1-10 in Ritchie and Kernighans The C Programming Language
 *
 * program written by Andrew Pauls
 * October 25, 2024
 */

#include <stdio.h>

main() 
{
	char c;

	while ((c = getchar()) != EOF) {
		if(c == '\t') {
			c = '\\';
			putchar(c);
			c = 't';
			putchar(c);
		} else if (c == '\\') {
			c = '\\';
			putchar(c);
			putchar(c);
		} else {
			putchar(c);
		}
	}
}
