#include <stdio.h>
#define PI 3.14159
int main()
{
	double radius;
	printf("Enter radius : ");
	scanf("%lf", &radius);
	printf("Area of circle with radius %0.3lf is %0.3lf", radius, PI * radius * radius);
	return (0);
}