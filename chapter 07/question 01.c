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