/* sum_the_middle_of_5.C
   A somewhat quirky little C program that takes from the user 5 ints and sums all of the odd values between those 5 ints.
   Ex: user enters: {1, 10, 100, 1000, 933}
   Answer is: all odds between max and min (1000 and 1), minus 1 because of 933, minus 1 because of 1 ----> 498 as the answer */


#include <stdio.h>

main()
{
	/* an array is suitable for storing the 5 values */
	int values[5];
	
	/* acquire the values from user */
	printf("Please enter the 5 values you would like us to do the calculation on now (permissible range is 0 - 9999).");
	scanf(" %d %d %d %d %d", values[0], values[1], values[2], values[3], values[4]);
	
	/* compute max and min values */
	int max,  min;
	min = 10000;						/* by setting min to 9999, the first value will take its place */
	max = -1;						/* by setting max to 0, the first value will take its place */
	for (int i = 0 ; i < 5; i++) 
	{
	  if (values[i] < min) min = values[i];
	  if (values[i] > max) max = values[i];
	}

	int numOdds=0;

	/* Now, in a comically inefficient manor, I will sum the odds */
	for (int j = min ; j <= max ; j++) 
	{
	  if ((j % 2 == 0) || j == values[0] || j == values[1] || j == values[2] || j==values[3] || j==values[4])
	  {
	  }
	  else 
	  {
		numOdds++;
	  }
	}
	
	printf("Number of odds: %", numOdds);
	return 0;

}
	
	