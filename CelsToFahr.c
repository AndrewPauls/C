/* for a range from -17 to 140 Cels, converts every 10th value to its corresponding Farh
 *
 * written by Andrew Pauls
 * October 25, 2024
 */

#include <stdio.h>

main()
{

	int step, limit;
	float fahr, cels;

	step = 10;
	cels = -17;
	limit = 140;

	printf("Celsius to Fahrenheit Conversion Table\n");
	while (cels <= limit) {
		fahr = ((9.0/5.0)*cels)+32;
		printf("Cels: %3.1f\tFahr: %3.1f\n", cels, fahr);
		cels+=step;
	}
}

	

