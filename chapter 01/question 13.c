#include <stdio.h>
#include <math.h>
int main()
{
	double a = 2, b = 2, c = 5, d = 6, radius;
	radius = (sqrt((a - c) * (a - c) + (b - d) * (b - d))) / 2.0;
	printf("Area = %0.3lf", 3.14159 * radius * radius);
	return (0);
}