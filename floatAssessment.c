/* in this program, I assess the types of values that can be represented by a float type
 *
 * written by andrew pauls
 * october 13, 2024
 * happy birthday grandma pauls (84 years young today!)
 *
 */

#include <stdio.h>

main()
{
	float f; 	// by default, signed
	
	/* float of 0111 1111 1111 1111 1111 1111 is 127.8388607 */
	f = 127.8388607;
	printf("Float of 0111 1111 1111 1111 1111 1111 1111 1111: %.10f\n", f);
}
