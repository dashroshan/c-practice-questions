#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d, dist;
	printf("Enter co-ordinates as : (a,b) (c,d) : ");
	scanf("(%lf,%lf) (%lf,%lf)", &a, &b, &c, &d);
	dist = sqrt((a - c) * (a - c) + (b - d) * (b - d));
	printf("Distance between them : %0.3lf", dist);
	return (0);
}