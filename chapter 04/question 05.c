#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter 2 two-digit integers to be multiplied separated by space : ");
	scanf("%d %d", &a, &b);
	printf("\n%19d\n", a);
	printf("%10s%9d\n", "x", b);
	printf("         ----------\n");
	printf("%dx%d is  %10d\n", b % 10, a, a * (b % 10));
	printf("%dx%d is  %9d\n", b / 10, a, a * (b / 10));
	printf("         ----------\n");
	printf("Add them %10d", a * b);
	return (0);
}