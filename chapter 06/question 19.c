#include <stdio.h>
int main()
{
	for (int y = 1; y <= 5; y += 1)
	{
		for (int x = 1; x <= 5; x += 1)
		{
			if (x == 3 && y == 3)
			{
				printf("O ");
			}
			else
			{
				printf("S ");
			}
		}
		printf("\n");
	}
	return (0);
}