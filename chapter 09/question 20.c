#include <stdio.h>
#include <math.h>
double roundNum(double num);
int main()
{
	double num;
	printf("Enter number : ");
	scanf("%lf", &num);
	printf("Rounded value : %0.2lf", roundNum(num));
	return (0);
}

double roundNum(double num)
{
	return (round(num * 100) / 100);
}