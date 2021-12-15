#include <stdio.h>
#include <math.h>
int main()
{
	double c, d, p, n;
	printf("Enter original cost : ");
	scanf("%lf", &c);
	printf("Enter depreciation rate : ");
	scanf("%lf", &d);
	printf("Enter scrap value : ");
	scanf("%lf", &p);
	n = log(p / c) / log(1 - d);
	printf("The useful life is %0.2lf years", n);
	return (0);
}