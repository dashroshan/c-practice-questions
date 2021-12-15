#include <stdio.h>
void space(int x);

int main()
{
	int x;
	printf("Enter total positions to space : ");
	scanf("%d", &x);
	printf("1");
	space(x);
	printf("2");
	return (0);
}

void space(int x)
{
	for (int i = 1; i <= x; i += 1)
	{
		printf(" ");
	}
}