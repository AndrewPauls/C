/* basicInfo.C
   A simple C program that:  prints out users name, date of birth, mobile number */


#include <stdio.h>
main () 
{
	char name[25];			/* string to hold the users name */
	char birthday[25];		/* string to hold the users dob */
	long cellNum;			/* int to hold the users mobile number */
	
	/* ask user for the information */
	printf("Welcome to this simple application. Please enter your name now, and hit 'Enter'.\n");
	scanf(" %s", name);
	printf("%s, please enter your birthday (ddmmyyyy).\n", name);
	scanf(" %s", birthday);
	printf("Lastly, please enter your 10 digit phone number, and hit 'Enter'");
	scanf(" %ld", &cellNum);


	/* Now, return the information to the user */
	printf("Name :\t%s\n", name);
	printf("DOB  :\t%s\n", birthday);
	printf("Mobile:\t%ld\n", cellNum);

	return 0;
}
	