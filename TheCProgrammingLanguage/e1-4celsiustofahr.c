#include <stdio.h>

/* Take a list of celsius temps, and convert to fahrenheit */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = -20; // lower temperature bound	
	upper = 100; // upper temp bound
	step = 5;  // step size

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * 9) / 5 + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
