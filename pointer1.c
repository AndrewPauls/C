/* here is a program that uses pointers in an elementary, exploratory way.
 *
 * one day, i will have complete command of the c language
 *
 * written by andrew pauls
 * october 16, 2024
 */

#include <stdio.h>

main()
{

	int a;
	int* aPointer;

	a = 100;
	aPointer = &a;

	// lets see what happens when we print the two
	printf("Value of a: %d\n", a);
	printf("Value of aPointer: %d\n", *aPointer);
	// printing, we see that both values are 100
	// lets now print the address of aPointer, if we can
	printf("Value of the actual data contained in aPointer: %d\n", aPointer);

	// are we allowed to assign some random cell of memory to a pointer?
	// lets try and assign aPointer to be equal to 20005
	//aPointer = 20005;
	//printf("Value of aPointer: %d\n", *aPointer);
	// performing the above two lines (if not commented out), results in 
	// 	a segmentation fault error (core dumped)

	

	// lets see if we can assign a char to an int pointer
	// first we need to see if we can assign a char to an int
	a = 'b';
	printf("Value of a: %d\n", a);
	// looks like its no problem to define a = 'b'. i guess this is what 
	// 	is meant by C being weakly typed
	// If i try to print the char value of a, its probably ok too
	printf("Value of a(char though): %c\n", a);
	// yes, you can do what i did above and get the char out to display
	// assigning the aPointer to a wont be an issue then
	aPointer = &a;
	printf("Value of aPointer: %d (the int) and %c (the char)\n", *aPointer, *aPointer);
}
