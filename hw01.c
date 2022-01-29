#include <stdio.h>>

int main()
{
	printf("Enter the temperature in Kelvin -> ");

	float kelvinInput; // Input in Kelvin
	float celciusOutput; // Output in Celcius
	float farenheitOutput; // Output in Farenheit
	float rankineOutput; // Output in Rankine
	float delisleOutput; // Output in Delisle

	scanf_s("%f", &kelvinInput);

	celciusOutput = (float) (kelvinInput - 273.15);
	farenheitOutput = (float)((kelvinInput - 273.15) * 9 / 5 + 32);
	rankineOutput = (float)(kelvinInput * 1.8);
	delisleOutput = (float)((373.15 - kelvinInput) * 3 / 2);

	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Temperature in Celsius: %0.1f\n", celciusOutput);
	printf("Temperature in Farenheit: %0.1f\n", farenheitOutput);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Temperature in Rankine: %0.1f\n", rankineOutput);
	printf("Temperature in Delisle: %0.1f\n", delisleOutput);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	return(0);
}