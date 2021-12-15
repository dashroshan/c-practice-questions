#include <stdio.h>
#define DAYS 31
int main()
{
	double temp[DAYS][10], highestTemp = -1000, lowestTemp = 1000;
	for (int i = 0; i <= DAYS - 1; i += 1)
	{
		printf("Enter temperatures in City 1 to 10 separated by spaces of day %d :\n", i + 1);
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &temp[i][0], &temp[i][1], &temp[i][2], &temp[i][3], &temp[i][4], &temp[i][5], &temp[i][6], &temp[i][7], &temp[i][8], &temp[i][9]);
	}
	for (int j = 0; j <= DAYS - 1; j += 1)
	{
		for (int k = 0; k <= 9; k += 1)
		{
			if (temp[j][k] > highestTemp)
			{
				highestTemp = temp[j][k];
			}
			if (temp[j][k] < lowestTemp)
			{
				lowestTemp = temp[j][k];
			}
		}
	}
	printf("Highest Temperature : %0.2lf\nLowest Temperature : %0.2lf", highestTemp, lowestTemp);
	return (0);
}