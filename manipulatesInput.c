/* a program to copy its input to its output, replacing each string of
 * 	one or more blanks by a single blank
 *
 * exercise from Ritchie and Kernighans "The C Programming Language"
 *
 * written by Andrew Pauls
 * October 25, 2024
 */

#include <stdio.h>

main()
{
	char c, lastchar;
	lastchar = '\n';
	while (( c = getchar()) != EOF) {
		if ( (lastchar == ' ') && (c == ' '))
			;
		else {
			putchar(c);
			lastchar = c;
		}
	}
}
