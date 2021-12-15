#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d;
	printf("Enter the eqn as ax2+bx+c : ");
	scanf("%lfx2+%lfx+%lf", &a, &b, &c);
	if (a == 0 && b == 0)
	{
		printf("No solution!");
	}
	else if (a == 0)
	{
		printf("There is only one root which is : %0.3lf", -c / b);
	}
	else
	{
		d = b * b - 4 * a * c;
		if (d < 0)
		{
			printf("No real roots!");
		}
		else
		{
			d = sqrt(d);
			printf("The roots are %0.3lf and %0.3lf", (-b + d) / (2 * a), (-b - d) / (2 * a));
		}
	}
	return (0);
}