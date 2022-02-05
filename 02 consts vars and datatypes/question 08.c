#include <stdio.h>
int main()
{
	float a, b;
	int sum;
	printf("Enter two floating point numbers separated by space : ");
	scanf("%f %f", &a, &b);
	sum = a + b;
	printf("a=%f\nb=%f\nsum=%d", a, b, sum);
	return (0);
}