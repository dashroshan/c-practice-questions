#include <stdio.h>
int prime(int num);
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	if (prime(num) == 1)
	{
		printf("Prime!");
	}
	else
	{
		printf("Not Prime!");
	}
	return (0);
}

int prime(int num)
{
	for (int i = 2; i < num; i += 1)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}