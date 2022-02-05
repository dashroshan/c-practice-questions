#include <stdio.h>
#include <math.h>
int main()
{
	double demandRate, setupCost, holdingCost, eoq, tbo;
	printf("Enter demanad rate, setup cost, holding cost separated by spaces : ");
	scanf("%lf %lf %lf", &demandRate, &setupCost, &holdingCost);
	eoq = sqrt((2.0 * demandRate * setupCost) / holdingCost);
	tbo = sqrt((2.0 * setupCost) / (demandRate * holdingCost));
	printf("EOQ = %0.3lf\nTBO = %0.3lf", eoq, tbo);
	return (0);
}