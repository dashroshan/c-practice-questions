#include <stdio.h>
int main()
{
	double eSum = 0, eSumTemp = 1, factorial = 1.0;
	for (int i = 1; 0 == 0; i += 1)
	{
		factorial *= (double)i;
		eSumTemp += 1.0 / factorial;
		if (eSumTemp - eSum >= 0.00001)
		{
			eSum = eSumTemp;
		}
		else
		{
			break;
		}
	}
	printf("e=%lf", eSum);
	return (0);
}