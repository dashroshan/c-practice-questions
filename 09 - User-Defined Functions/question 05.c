#include <stdio.h>
void printSeries(int n);
int main()
{
	int n;
	printf("Enter total terms of the Fibonacci series needed : ");
	scanf("%d", &n);
	printSeries(n);
	return (0);
}

void printSeries(int n)
{
	int nMinus1 = 1, nMinus2 = 1;
	printf("1 1 ");
	for (int i = 3; i <= n; i += 1)
	{
		nMinus2 = nMinus1;
		nMinus1 += nMinus2;
		printf("%d ", nMinus1);
	}
}