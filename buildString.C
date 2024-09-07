/* buildString.C
   Common and efficient function for building user input strings
   Copied from Perry's 'C By Example' */


#include <stdio.h>
#define MAX 20

void getInStr(char str[], int len);

main()
{
	char inputStr[MAX];
	printf("What is your full name? ");
	getInStr(inputStr, MAX);
	printf("After return, your name is %s", inputStr);
	return 0;
}


/***************************************************/
void getInStr(char str[], int len)
{
	int i = 0, inputChar;
	
	while (i<(len-1) && ((inputChar=getchar()) != '\n'))
	  {	
		str[i] = inputChar;
		i++;
	  } 
	str[i] = '\0';
	return;
}