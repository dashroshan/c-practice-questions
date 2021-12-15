#include <stdio.h>
#define A 20
#define B 10

int add(int a, int b);
int sub(int a, int b);

int main()
{
	printf("%d + %d = %d\n", A, B, add(A, B));
	printf("%d - %d = %d\n", A, B, sub(A, B));
	return (0);
}

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}