/* Program is a modification of the base program for printing longest input lines in Ritchie and Kernhighans 'The C Programming Language'
 *
 * This program prints the length of arbitrary long input lines, and as much as possible of the input text
 *
 * Previously, the program was restricted to handling input lines less than 1000 characters
 *
 * Written by Andrew Pauls
 * November 4, 2024
 *
 */


#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)	/* there was a line */
		printf("Length Longest: %d\n", max);
		printf("%s", longest);
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	
	/* INSERT MODIFICATION #1 - CONTINUE COUNTING AFTER 999 CHARS */
	if ((c != '\n') && (c != EOF))
		// ++i; ??
		while ((c=getchar()) != EOF && c!='\n')
			++i;
	/* END MODIFICATION #1 - COUNTED AFTER 999 CHARS UNTIL EOF or NEWLINE */

	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0' && i < 1000)		// this is mod #2
		++i;
}

