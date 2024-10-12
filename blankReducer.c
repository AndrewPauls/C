#include <stdio.h>

/* program to copy input to output, but replace each string of
 * one or more blanks with a single blank */

main()
{

	int lastChar, c;
	lastChar = '0';

	while((c=getchar()) != EOF){
		if((c == ' ') | (c == '\t')) {

			if ((lastChar == ' ') | (lastChar == '\t')){
			
			}
			else {
				putchar(c);
				lastChar = c;
			}
			
		} 
		else {
			putchar(c);
			lastChar =c;
		}
	
	}
}
			
