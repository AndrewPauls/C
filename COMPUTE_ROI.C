/* Filename: COMPUTE_ROI.C
   A program that asks the user to input the initial amount of capital invested,
   years invested, and then the return percentage of each year. 
   The output is the ROI   */


#include <stdio.h>
main () 
{

	float principal;		/* initial amount of money the user has invested */
	float yearly_return;		/* the percentage gain/loss on the year	*/
	float total;			/* active amount of capital the user possesses */
	int years;			/* number of years the money has been invested */
	float ROI;			/* the final Return on Investment figure */
	int counter;

	printf("Please type in the amount of money you began investing with. \n");
	scanf(" %f", &principal);	/* save the principal amount in correct float variable */
	printf("Please type in the number of years your money has been invested. \n");
	scanf(" %d", &years);

	total = principal;		/* assign the active total to be the principal amount */

	for (counter = 1; counter <= years; counter++)
	{
		printf("Please type in the return for year %d. \n", counter);		/* get the return for the year */
		scanf(" %f", &yearly_return);					/* update the total */
		printf("years currently registered: %d\n", years);
		total *= yearly_return;
	}

	printf("The total value of the principal after %d years is: %f\n", years, total);	/* print out the final amount */
	ROI = (total - principal) / principal;						/* compute and deliver the ROI */
	printf("Ultimate ROI was: \t\t\t%f", ROI);
	return 0;
}