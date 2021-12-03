#include <stdio.h>
int main()
{
	FILE *fp;
	char code[20], codeInput[20];
	double cost;
	int total;
	fp = fopen("data.o", "r");
	printf("Enter product code : ");
	gets(codeInput);

	while (feof(fp) == 0)
	{
		fscanf(fp, "%s %lf %d", code, &cost, &total);
		if (strcmp(code, codeInput) == 0)
		{
			printf("%-20s %7.2lf    %02d\n", code, cost, total);
			goto found;
		}
	}
	printf("No product found with the given code!");
found:
	fclose(fp);
	return (0);
}