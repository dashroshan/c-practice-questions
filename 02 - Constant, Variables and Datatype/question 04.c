#include <stdio.h>
int main()
{
	float a, b;
	printf("Enter first float type number : ");
	scanf("%f", &a);
	printf("Enter second float type number : ");
	scanf("%f", &b);
	printf("%0.3f / %0.3f = %0.3f", a, b, a / b);
	return (0);
}