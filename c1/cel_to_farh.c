#include <stdio.h>

float convert(float c);

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0.0;
	upper = 300.0;
	step = 20.0;

	celsius = lower;

	printf("Celsius \t Fahrenheit\n");
	printf("------- \t ----------\n");

	while (celsius <= upper) {
		fahr = convert(celsius);
		printf("%3.0f \t\t %6.1f \n", celsius, fahr);
		celsius = celsius + step;
	}
}

float convert(float celsius) {
	return celsius * (9.0 / 5.0) + 32.0;
}
