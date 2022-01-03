#include <stdio.h>
int main()
{
	double x, y;
	printf("Enter x and y separated by space : ");
	scanf("%lf %lf", &x, &y);
	printf("a. %0.3lf\n", (x + y) / (x - y));
	printf("b. %0.3lf\n", (x + y) / 2.0);
	printf("c. %0.3lf\n", (x + y) * (x - y));
	return (0);
}