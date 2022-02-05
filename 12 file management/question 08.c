#include <stdio.h>
#define TOTAL 5

int main()
{
	FILE *fp;
	char code[20];
	double cost;
	int totalItems;
	fp = fopen("data.o", "w");
	for (int i = 0; i < TOTAL; i += 1)
	{
		printf("Enter product code : ");
		scanf("%s", code);
		printf("Enter cost : ");
		scanf("%lf", &cost);
		printf("Enter total number of items : ");
		scanf("%d", &totalItems);
		fprintf(fp,"%s %lf %d", code, cost, totalItems);
	}
	fclose(fp);
	return (0);
}