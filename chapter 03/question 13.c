#include <stdio.h>
int main()
{
	double a, b, c;
	printf("Enter 3 numbers separated by spaces : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	a = (a > b) ? a : b;
	a = (a > c) ? a : c;
	printf("Largest of them : %lf", a);
	return (0);
}