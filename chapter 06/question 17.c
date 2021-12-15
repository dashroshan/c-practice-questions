#include <stdio.h>
#include <math.h>
int main()
{
	double radian;
	printf("__________________________________+Y\n");
	for (int degree = 0; degree <= 180; degree += 15)
	{
		printf("|");
		for (int yVal = 1; yVal <= 30; yVal += 1)
		{
			if (yVal == (int)(30 * sin(3.1416 / 180.0 * (double)degree)))
			{
				printf("0");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("+X");
	return (0);
}