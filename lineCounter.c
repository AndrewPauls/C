/* program copied from Ritchie and Kernighans The C Programming Language
 *
 * copied October 25, 2024
 */

#include <stdio.h>

main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}

