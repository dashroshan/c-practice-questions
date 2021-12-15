#include <stdio.h>
int main()
{
	int numOfInt = 0, sumOfInt = 0;
	for (int i = 100; i <= 200; i += 1)
	{
		if (i % 7 == 0)
		{
			numOfInt += 1;
			sumOfInt += i;
		}
	}
	printf("There are %d integers between 100 and 200 that are divisible by 7. Sum of those integers is %d.\n", numOfInt, sumOfInt);
	return (0);
}