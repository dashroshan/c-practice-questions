#include <stdio.h>
int main()
{
	double num[4];
	int numbers[4];
	for (int i = 0; i < 4; i += 1)
	{
		printf("Enter number #%d : ", i + 1);
		scanf("%lf", &num[i]);
		if (num[i] < 0.0 || num[i] > 20.0)
		{
			printf("Value not in the range of 0 to 20!");
			return (0);
		}
		numbers[i] = (int)round(num[i]);
	}
	printf("\n");
	printf("\n");
	for (int i = 0; i < 4; i += 1)
	{
		for (int j = 1; j <= numbers[i]; j += 1)
		{
			printf("* ");
		}
		printf("\n");
		for (int j = 1; j <= numbers[i]; j += 1)
		{
			printf("* ");
		}
		printf("%0.2lf\n", num[i]);
		for (int j = 1; j <= numbers[i]; j += 1)
		{
			printf("* ");
		}
		printf("\n");
		printf("\n");
	}
	return (0);
}