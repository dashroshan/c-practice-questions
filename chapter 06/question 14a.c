#include <stdio.h>
#include <math.h>
int main()
{
	double x, tempSin, sin, diff, factorial = 1.0;
	int plusMinus = 1;
	printf("Enter radian value : ");
	scanf("%lf", &x);
	tempSin = x;
	sin = x;
	for (int i = 3; 0 == 0; i += 2)
	{
		plusMinus = (plusMinus == 1) ? -1 : 1;
		factorial *= (i - 1) * i;
		tempSin += plusMinus * (pow(x, i) / factorial);
		diff = tempSin - sin;
		diff = (diff > 0) ? diff : -diff;
		if (diff < 0.00001)
		{
			sin = tempSin;
			break;
		}
		else
		{
			sin = tempSin;
		}
	}
	printf("sin(%0.5lf)=%0.5lf", x, sin);
	return (0);
}