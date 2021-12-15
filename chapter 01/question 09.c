#include <stdio.h>

double cToF(double celsius);
double fToC(double farenheit);

int main()
{
	printf("25.5C is %0.1lfF\n", cToF(25.5));
	printf("25.5F is %0.1lfC\n", fToC(25.2));
	return (0);
}

double cToF(double celsius)
{
	return ((9.0 / 5.0) * celsius + 32.0);
}

double fToC(double farenheit)
{
	return ((5.0 / 9.0) * (farenheit - 32));
}