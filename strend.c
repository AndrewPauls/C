/* here is a program that checks whether the string t occurs at the end of string s
 *
 * Idea inspired by Kernighan and Ritchies The C Programming Language
 * Code entirely written by: Andrew Pauls
 *
 * October 24, 2024
 */

#include <stdio.h>

main()
{

	printf("Please enter a string less than 100 chars.\n");
	char st[100];
	char *P_st = st;	// pointer will make referencing array easier
	fgets(st, sizeof(st), stdin);
	printf("You entered: %s\n", &st);

	// ok, i have the string input correctly
	// now ask for t and s
	printf("Please specify the first string, s. Later, you will specify the second string, t.\n");
	printf("The program will test whether the string t occurs at the end of string s in the first string you entered.\n");

	printf("Enter s now. Ensure it is fewer than 50 chars.\n");
	char s[50];
	char *P_s = s;	// pointer will make referencing array easier later
	fgets(s, sizeof(s), stdin);
	printf("You entered: %s\n", s);

	printf("Please enter the string t now. Ensure it is fewer than 50 chars.\n");
	char t[50];
	char *P_t = t;
	fgets(t, sizeof(t), stdin);
	printf("You entered: %s\n", t);

	printf("\n\nPerforming the check now.\n");

	// check if t follows s in st
	// this can be done in several ways
	// FIRST WAY: concatenate s, t and check if it matches st
	// SECOND WAY: check if the first component of s is st's first part, and then 
	// 	if st's second component is t
	// I will go with the second way
	
	char cs = *(P_s);
	char cst = *(P_st);
	

	while( cs != '\0') {	// while char in s is not EOF
		if (cst == cs){	// if char in st = char in s
			printf("Another char match: %c - %c.\n", cs, cst);
			P_st++;
			P_s++;			// increment pointers to s, t
			cs = *(P_s);
			cst = *(P_st);
		}
		else 
		{
			break;
		}
	}

	printf("Ok, we made it here...\n");

	char ct = *(P_t);
	// now check if t, note that we will get here regardless if s is start of st or not
	while(ct != '\0') {	// while char in t is not EOF
		if (cst  == ct){	// if char in st = char in t
			printf("Another char match!! %c - %c.\n", ct, cst);
			P_st++;
			P_t++;
			ct = *(P_t);
			cst = *(P_st);
		}
		else
		{
			break;
		}
	}
}

