#include <stdio.h>
int main()
{
	double length, width;
	printf("Enter length and width as lxw : ");
	scanf("%lfx%lf", &length, &width);
	printf("Area=%0.3lf\nPerimeter=%0.3lf", length * width, 2 * (length + width));
	return (0);
}