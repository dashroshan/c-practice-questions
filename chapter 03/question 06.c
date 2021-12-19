#include <stdio.h>
int main()
{
	double purchasePrice, yearsOfService, annualDepreciation;
	printf("Enter purchase price, years of service, and annual depreciation separated by spaces : ");
	scanf("%lf %lf %lf", &purchasePrice, &yearsOfService, &annualDepreciation);
	printf("Salvage value = %0.2lf", purchasePrice - annualDepreciation * yearsOfService);
	return (0);
}