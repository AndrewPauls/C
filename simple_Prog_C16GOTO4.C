/* Filename: C16GOTO4.C
   A program to demonstrate the overuse of 'goto' 
   Copied from 'C By Example', Greg Perry */

#include <stdio.h>
main() 
{
	goto Here;

First: 
	printf("A \n");
	goto Final;

There: 
	printf("B \n");
	goto First;

Here:
	printf("C \n");
	goto There;

Final:
	return;
}