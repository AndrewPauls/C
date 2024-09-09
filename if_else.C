/* if_else.C
   A program that defines 3 numbers. An if-else blocks prints output on arbitrary conditions */


#include <stdio.h>
main ()
{
	double num1 = 4235495860.34;
	double num2 = 9889134.1289349;
	double num3 = 4235495860.34;

	if (num1 == num2)
	{
	  printf("A match\n");
	}
	
	if (num1 > num2)
	{
	  printf("num1 is bigger than num2\n");
	}
	
	if (num1 == num3)
	{
	  printf("Finally, a match\n");
	}
	
	if (num2 > num3)
	{
	  printf("the middle number is big\n");
	}

	num3 += 0.01;
	if (num1 == num3)
	{
	  printf("num1 and num3 are still matching\n");
	}
	else 
	{
	  printf("num3 is now bigger than num1");
	}
	
	return 0;
}