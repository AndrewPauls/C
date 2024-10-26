/* simple program that counts blanks, tabs, and newlines
 * exercise from Ritchie and Kernighans The C Programming Language
 *
 * written by Andrew Pauls
 * October 25, 2024
 */

#include <stdio.h>

main()
{
	int bl, nl, ta;
	bl = 0;
	nl = 0;
	ta = 0;

	char c;
	while ((c = getchar()) != EOF)
		if (c == ' ')
			bl++;
		else if (c == '\n')
			nl++;
		else if (c == '\t')
			ta++;

	printf("Blanks: %d\tNew Lines: %d\tTabs: %d\n", bl, nl, ta);
}

