#include <stdio.h>
int main()
{
	long int m, product = 1;
	printf("Enter m : ");
	scanf("%ld", &m);
	for (int i = 1; i <= m; i += 1)
	{
		product *= i;
	}
	printf("m!=%ld", product);
	return (0);
}