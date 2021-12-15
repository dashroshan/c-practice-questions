#include <stdio.h>
int main()
{
	int num1 = 1, num2 = 1, total = 2, m, sum;
	printf("Enter number greater than 2 : ");
	scanf("%d", &m);
	printf("1 1 ");
	do
	{
		sum = num1 + num2;
		printf("%d ", sum);
		num1 = num2;
		num2 = sum;
		total += 1;
	} while (total <= m);
	return (0);
}