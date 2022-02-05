#include <stdio.h>
int main()
{
	int lowerRange = 100, upperRange = 200;
	int totalPrime = 0, isPrime = 0;
	for (int num = lowerRange; num <= upperRange; num += 1)
	{
		isPrime = 1;
		for (int i = 2; i < num; i += 1)
		{
			if (num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		totalPrime += (isPrime == 1) ? 1 : 0;
	}
	printf("There are %d prime numbers between %d and %d!", totalPrime, lowerRange, upperRange);
	return (0);
}