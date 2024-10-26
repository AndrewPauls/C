/* a tiny program that checks what happens when a string to be printed by printf 
 * 	contains '\c'
 *
 * October 25, 2024
 */

#include <stdio.h>

main()
{
	printf("Hello \cWorld\n");
	// the above produces no drastic change, the c gets printed
	
	printf("Hello \tWorld\n");
	// inserts a tab
	printf("Hello \aWorld\n");
	// i think this runs the bell ( i didnt hear it )
	printf("Hello \bWorld\n");
	// inserts a backspace character
	printf("Hello Wor\dld\n");
	// nothing drastic, the output is Hello Wordld
}
