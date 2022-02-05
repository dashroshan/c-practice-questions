#include <stdio.h>
int main()
{
	FILE *fp;
	char code[20];
	double cost;
	int total, id = 0;
	fp = fopen("data.o", "r");

	while (feof(fp) == 0)
	{
		id += 1;
		fscanf(fp, "%s %lf %d", code, &cost, &total);
		if (id % 2 != 0)
		{
			printf("%-20s %7.2lf    %02d\n", code, cost, total);
		}
	}
	fclose(fp);
	return (0);
}