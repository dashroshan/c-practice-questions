#include <stdio.h>
int main()
{
	int num;
	printf("Enter a positive integer : ");
	scanf("%d", &num);
	for (int i = 2; i < num; i += 1)
	{
		if (num % i == 0)
		{
			printf("%d is not a prime number!", num);
			goto lastline;
		}
	}
	printf("%d is a prime number!", num);
lastline:
	return (0);
}