/* charArr.C
   - creates a char array, prints it to screen
   - creates an array that holds a string, prints to screen */

#include <stdio.h>
main()
{
	char animal[] = "Salamander";			/* contains an array of chars, each of the letters of Salamander is a cell of the animal[] */
	char bird[10] = "Eagle";			/* contains a string, for after the 'e' in Eagle there is a null zero */

	printf(animal);
	printf("\n");
	printf(bird);
	return 0;
}