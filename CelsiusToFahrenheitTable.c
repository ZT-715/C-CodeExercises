#include <stdio.h>

/* print a Fahrenheit-Celsius table from -20 to 500 Fahrenheit witch have 20 degrees between each row*/

#define LOWER -20 // lower limit
#define UPPER 500 // upper limit
#define STEP 20   // step size

int main()
{
	float fahrenheit, celsius;

	fahrenheit = LOWER;

	printf("Fahrenheit | Celsius\n");

	do {
		printf("%10.2f | %4.2f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));

		fahrenheit += STEP; 

	} while (fahrenheit <= UPPER );
	return 0;
} 