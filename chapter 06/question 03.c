#include <stdio.h>
int main()
{
	long int num, sum = 0;
	printf("Enter number : ");
	scanf("%ld", &num);
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	printf("Sum of digits is %ld", sum);
	return (0);
}