#include <stdio.h>
int main()
{
	int num[3];
	printf("Enter 3 integers separated by spaces : ");
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	printf("\n%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n\n", num[2]);
	printf("%d %d %d", num[0], num[1], num[2]);
	return (0);
}