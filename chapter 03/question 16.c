#include <stdio.h>
int main()
{
	int totalCalls;
	printf("Enter total calls : ");
	scanf("%d", &totalCalls);
	printf("Bill = %0.2lf", 250.0 + ((totalCalls > 100) ? (totalCalls - 100) : 0) * 1.25);
	return (0);
}