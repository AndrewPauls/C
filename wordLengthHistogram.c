/* The solution to exercise 1-13 from Kernighan and Ritchie's The C Programming Language
 *
 * Solution written by Andrew Pauls
 * October 28, 2024
 *
 * Program prints a horizontal histogram of all the lengths of words provided
 * as input
 */

#include <stdio.h>

int MAXWORDS = 25;		// maximum number of words in input
int MAXLENGTH = 20;		// maximum number of letters per word
				
main()
{

	// keep track of words
	// keep track of each word length in an array
	// at end of input, print the histogram
	

	int length;
	char c;
	int words[MAXWORDS];

	// initialize all elemenst to 0
	for (int i = 0 ; i < MAXWORDS; i++){
		words[i] = 0;
	}
	length = 0;

	for (int i = 0 ; i < MAXWORDS ; i++) {	// for all possible words
		while ( (c = getchar()) != EOF ) {	// read char
			if ( (c != ' ') && (c != '\n') && (c != '\t') && (length < MAXLENGTH) ) {
				length++;
			}
			else {
				words[i] = length;
				length = 0;
				break;
			}
		}
	}

	// print the array
	for (int j = 0 ; j < MAXWORDS; j++) {	// for each possible word
		// print the words index
		printf("Word %d:", j);
		for (int k = 0 ; k < words[j]; k++) {	// for each letter
			printf("-");
		}
		printf("\n");
	}
}	
			
