#include <stdio.h>
#include <math.h>
int main()
{
	printf("x  ");
	for (double i = 0.1; i < 0.99; i += 0.1)
	{
		printf("%6.1lf", i);
	}
	for (int j = 0; j <= 9; j += 1)
	{
		printf("\n%0.1lf", (double)j);
		for (int k = 1; k <= 9; k += 1)
		{
			printf("%6.1lf", exp(-(j + (double)k / 10.0)));
		}
	}
	return (0);
}