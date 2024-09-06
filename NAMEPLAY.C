/* Filename: SPACED_OUT_NAME.C
   A simple C file to illustrate the use of a function */


#include <stdio.h>



getName()
{
	char name[20];
	printf("Please type in your name, as long as it is below 20 letters.\n");
	scanf(" %s", name);
	printf("Hello there, %s", name);
	return 0;
}

main()
{
	getName();		/* grab the users name, store it in a char arry */
	return 0;
}

/**********************/

