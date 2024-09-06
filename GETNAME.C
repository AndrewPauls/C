/* 	Filename: GETNAME.C
	Asks for the users name, prints it to console	*/


#include <stdio.h>

main()
{
	char fname[20];		/* a char array to store a first name of up to 20 letters */
	char lname[20];		/* a char array to store a last name of up to 20 letters */

	printf("Please enter your first name: ");	/* ask user for name */
	scanf(" %s", fname);				/* store the first name in 'first' as a string */ 
	printf("Please enter your last name: ");	/* prompt for last name */
	scanf(" %s", lname);
	
	printf("%s \t %s \n", fname, lname);
	return 0;
}