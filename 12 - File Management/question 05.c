#include <stdio.h>
int main()
{
	FILE *fp;
	int sum = 0, num;
	fp = fopen("data.o", "r");
	while ((num = getw(fp)) != EOF)
	{
		sum += num;
	}
	fclose(fp);
	fp = fopen("data.o", "a");
	putw(sum, fp);
	fclose(fp);
	return (0);
}