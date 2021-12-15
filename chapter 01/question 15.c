#include <stdio.h>
int main()
{
	double x, y;
	printf("Enter 2 numbers separated by spaces : ");
	scanf("%lf %lf", &x, &y);
	printf("x=      %6.2lf    y=         %6.2lf\n", x, y);
	printf("Sum=    %6.2lf    Difference=%6.2lf\n", x + y, x - y);
	printf("Product=%6.2lf    Division=  %6.2lf", x * y, x / y);
	return (0);
}