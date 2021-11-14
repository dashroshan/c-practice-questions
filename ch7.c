/*Q7.1
#include <stdio.h>
#define PTS 3
int main()
{
	double points[PTS][2] = {
		{-3, -5},
		{-1.333, 0},
		{0, 4}};
	double m, c, n = PTS, xySum = 0, xSum = 0, ySum = 0, x2Sum = 0;

	for (int i = 0; i <= PTS - 1; i += 1)
	{
		xySum += points[i][0] * points[i][1];
		xSum += points[i][0];
		ySum += points[i][1];
		x2Sum += points[i][0] * points[i][0];
	}

	m = (n * xySum - xSum * ySum) / (n * x2Sum - xSum * xSum);
	c = (1 / n) * (ySum - m * xSum);
	printf("Line : y=%0.1lfx+%0.1lf", m, c);
	return (0);
}
*/

/*Q7.2
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
*/

/*Q7.3
#include <stdio.h>
int main()
{
	int count[5] = {0}, totalBallots, spoilt = 0, candidate;
	printf("Enter number of total ballots : ");
	scanf("%d", &totalBallots);
	for (int i = 0; i <= totalBallots - 1; i += 1)
	{
		printf("Enter candidate number of ballot %d : ", i + 1);
		scanf("%d", &candidate);
		if (candidate >= 1 && candidate <= 5)
		{
			count[candidate - 1] += 1;
		}
		else
		{
			spoilt += 1;
		}
	}
	printf("Spoilt ballots=%d\nTotal votes for:\nCandidate 1=%d\nCandidate 2=%d\nCandidate 3=%d\nCandidate 4=%d\nCandidate 5=%d\n", spoilt, count[0], count[1], count[2], count[3], count[4]);
	return (0);
}
*/

/*Q7.4*/
#include <stdio.h>
int main()
{
	return (0);
}