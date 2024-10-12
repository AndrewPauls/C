#include <stdio.h>

main()
{
	/* print fahr-cels for 0 degrees to 300, but in reverse order */

	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));	
}
