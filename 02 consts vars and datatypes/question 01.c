#include <stdio.h>
int main()
{
	int n;
	double sum = 0;
	printf("Enter n : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i += 1)
	{
		sum += 1.0 / i;
	}
	printf("Sum of the harmonic series : %0.3lf", sum);
	return (0);
}