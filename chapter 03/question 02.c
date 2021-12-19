#include <stdio.h>
int main()
{
	double num;
	int digit;
	printf("Enter a floating point number : ");
	scanf("%lf", &num);
	printf("Right most digit of the integral part of the number : %d", ((int)num) % 10);
	return (0);
}