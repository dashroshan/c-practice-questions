#include <stdio.h>
int main()
{
	double x, tempCos = 1, cos = 1, diff, factorial = 1.0;
	int plusMinus = 1;
	printf("Enter radian value : ");
	scanf("%lf", &x);
	for (int i = 2; 0 == 0; i += 2)
	{
		plusMinus = (plusMinus == 1) ? -1 : 1;
		factorial *= (i - 1) * i;
		tempCos += plusMinus * (pow(x, i) / factorial);
		diff = tempCos - cos;
		diff = (diff > 0) ? diff : -diff;
		if (diff < 0.00001)
		{
			cos = tempCos;
			break;
		}
		else
		{
			cos = tempCos;
		}
	}
	printf("cos(%0.5lf)=%0.5lf", x, cos);
	return (0);
}