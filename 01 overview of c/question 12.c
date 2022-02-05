#include <stdio.h>
#include <math.h>
int main()
{
	double a = 0, b = 0, c = 4, d = 5, radius;
	radius = sqrt((a - c) * (a - c) + (b - d) * (b - d));
	printf("Perimeter = %0.3lf\nArea = %0.3lf", 2 * 3.14159 * radius, 3.14159 * radius * radius);
	return (0);
}