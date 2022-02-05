#include <stdio.h>
int main()
{
	FILE *fp;
	double tempCost, totalCost = 0;
	int tempTotal;
	fp = fopen("data.o", "r");
	while (feof(fp) == 0)
	{
		fscanf(fp, "%*s %lf %d", &tempCost, &tempTotal);
		totalCost += tempCost * tempTotal;
	}
	printf("Total value : %0.2lf", totalCost);
	fclose(fp);
	return (0);
}