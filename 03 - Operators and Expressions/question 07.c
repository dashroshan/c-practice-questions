#include <stdio.h>
int main()
{
	double number;
	int greater, lesser;
	printf("Enter a real floating point number : ");
	scanf("%lf", &number);
	greater = (int)(number) + 1;
	lesser = (int)(number);
	printf("%d %0.3lf %d", greater, number, lesser);
	return (0);
}