#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, s, area;
	printf("Enter sides of triangle separated by spaces : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Area = %0.3lf", area);
	return (0);
}