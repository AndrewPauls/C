/* Here is a string concatenation program.
 * The program accepts two strings of input, and concatenates the first
 * 	string to the end of the second.
 *
 * Written by Andrew Pauls
 * October 24, 2024
 *
 */

#include <stdio.h>




main()
{

	char *s, *t;

	// get input from user
	char str[100];		// s
	char str2[100];		// t

	printf("Please enter a string less than 100 chars.\n");
	scanf("%s", str);
	s = str;	
	// return input as char pointer
	printf("Str: %s\n", str);
	// print s and t, ensure we have them correct
	

	printf("Please enter a string less than 100 chars.\n");
	scanf("%s", str2);
	t = str2;	
	// return input as char pointer
	printf("Str: %s\n", str2);
	

	char strcat[200];

	int lastChar = 0;
	for (int i = 0; i < 100; i++) {
		if (*(t+i) != '\0') {
			strcat[i] = *(t+i);
			lastChar = i;
		} else
		{
			lastChar++;
			break;
		}
	}

	int s_counter = 0;
	for (int j = lastChar; j < 200; j++) {
		if (*(s+s_counter) != '\0') {
			strcat[lastChar+s_counter] = *(s+s_counter);
			s_counter++;
		}
		else 
		{
			break;
		}
	}
	printf("Concatenated string: %s\n",strcat);
}
