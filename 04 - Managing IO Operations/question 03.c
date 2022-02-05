#include <stdio.h>
#include <math.h>
int main()
{
	double num;
	printf("Enter number : ");
	scanf("%lf", &num);
	printf("Rounded value : %d", (int)round(num));
	return (0);
}