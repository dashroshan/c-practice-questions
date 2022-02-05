#include <stdio.h>
int main()
{
	int itemType;
	double totalCost;
	printf("Enter total amount : ");
	scanf("%lf", &totalCost);
	printf("Enter 1 for mill cloth and 2 for handloom items : ");
	scanf("%d", &itemType);
	if (itemType != 1 && itemType != 2)
	{
		printf("Not a valid input!\n");
	}
	switch ((int)totalCost)
	{
	case 0 ... 100:
		totalCost *= (itemType == 1) ? 1 : 0.95;
		break;
	case 101 ... 200:
		totalCost *= (itemType == 1) ? 0.95 : 0.925;
		break;
	case 201 ... 300:
		totalCost *= (itemType == 1) ? 0.925 : 0.9;
		break;
	default:
		totalCost *= (itemType == 1) ? 0.9 : 0.85;
		break;
	}
	printf("The discounted cost is %0.2lf", totalCost);
	return (0);
}