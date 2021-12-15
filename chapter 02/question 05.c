#include <stdio.h>
int main()
{
	double rice, sugar;
	printf("Enter the price of 1kg rice : ");
	scanf("%lf", &rice);
	printf("Enter the price of 1kg sugar : ");
	scanf("%lf", &sugar);
	printf("*** LIST OF ITEMS ***\n");
	printf("%-10s%s\n", "Item", "Price");
	printf("%-10sRs %0.2lf\n", "Rice", rice);
	printf("%-10sRs %0.2lf\n", "Sugar", sugar);
	return (0);
}