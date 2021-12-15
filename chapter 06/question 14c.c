#include <stdio.h>
#include <math.h>
int main()
{
	double tempSum = 0, sum;
	for (int i = 1; 0 == 0; i += 1)
	{
		tempSum += pow(1.0 / (double)i, i);
		if (tempSum - sum < 0.00001)
		{
			break;
		}
		else
		{
			sum = tempSum;
		}
	}
	printf("Sum=%0.5lf", sum);
	return (0);
}