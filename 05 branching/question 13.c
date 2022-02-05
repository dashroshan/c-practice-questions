#include <stdio.h>
int main()
{
	int totalNum = 0, sum = 0;
	for (int i = 0; i <= 100; i += 1)
	{
		if (i % 6 == 0 && i % 4 != 0)
		{
			totalNum += 1;
			sum += i;
		}
	}
	printf("There are %d such numbers and their sum is %d", totalNum, sum);
	return (0);
}