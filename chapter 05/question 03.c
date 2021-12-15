#include <stdio.h>
int main()
{
	int a, b, c, d, m, n;
	double x1, x2;
	printf("Enter the 1st eqn as ax+by=c : ");
	scanf("%dx+%dy=%d", &a, &b, &m);
	printf("Enter the 2nd eqn as ax+by=c : ");
	scanf("%dx+%dy=%d", &c, &d, &n);
	if ((a * d - c * b) == 0)
	{
		printf("No unique solution!\n");
	}
	else
	{
		x1 = (double)(m * d - b * n) / (double)(a * d - c * b);
		x2 = (double)(n * a - m * c) / (double)(a * d - c * b);
		printf("x1=%0.3lf\nx2=%0.3lf\n", x1, x2);
	}
	return (0);
}