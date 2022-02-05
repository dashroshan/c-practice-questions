#include <stdio.h>
#include <math.h>
double roundFn(double num, int roundTo);
int main()
{
	double num;
	int roundTo;
	printf("Enter number : ");
	scanf("%lf", &num);
	printf("Enter total decimal places to round off to : ");
	scanf("%d", &roundTo);
	printf("Rounded value : %.*lf", roundTo, roundFn(num, roundTo));
	return (0);
}

double roundFn(double num, int roundTo)
{
	//round function rounds off the number to the nearest integer
	//To convert for example 1.2345 to 2 decimal places, we can multiply it with 10^2, use the round function and divide by 10^2
	//1.2345 * 10^2 = 123.45
	//rounding it gives 123, 123*10^2=1.23 which is the required value
	return (round(num * pow(10, roundTo)) / pow(10, roundTo));
}