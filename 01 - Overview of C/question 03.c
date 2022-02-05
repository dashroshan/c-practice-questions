#include <stdio.h>
#define LINES 4
int main()
{
	for (int i = 1; i <= LINES; i += 1)
	{
		for (int j = 1; j <= i; j += 1)
		{
			printf("* ");
		}
		printf("\n");
	}
	return (0);
}