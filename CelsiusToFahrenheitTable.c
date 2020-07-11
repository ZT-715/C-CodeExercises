#include <stdio.h>

/* print a Fahrenheit-Celsius table from -20 to 300 Fahrenheit witch have 20 degrees between each row*/

int main()
{
	float fahrenheit, celsius;

	fahrenheit = -20;

	printf("Fahrenheit | Celsius\n");

	do {
		celsius = (5.0/9.0)*(fahrenheit-32);	
		if( fahrenheit >= 0 && fahrenheit < 100 ){
			printf("%10.2f | %4.2f\n", fahrenheit, celsius);
		} else {
			printf("%10.2f | %4.2f\n", fahrenheit, celsius);
		}
		fahrenheit += 20; 

	} while (fahrenheit <= 300);
	return 1;
} 
