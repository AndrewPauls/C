#include <stdio.h>

/* count the chars in the input */

main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
