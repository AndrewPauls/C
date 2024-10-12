#include <stdio.h>

/* counts all lines, tabs, chars */
main()
{
	int c, lines, tabs, chars;
	lines = 0;
	tabs = 0;
	chars = 0;

	while (c != EOF ) {
		c = getchar();
		if(c == '\n')
			++lines;
		if(c == '\t')
			++tabs;
		++chars;
	}
	printf("%d\t chars, %d\t lines, %d\t tabs.\n", chars, lines, tabs);
}
