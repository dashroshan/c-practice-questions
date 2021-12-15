#include <stdio.h>
#include <math.h>
int main()
{
	int y1, y2;
	printf("0---y--->\n");
	printf("|\nx\n|\n");
	for (double x = 0.0; x < 4.05; x += 0.1)
	{
		y1 = (int)(50 * exp(-0.4 * x));
		y2 = (int)(50 * exp(-0.4 * x * x / 2));
		for (int y = 0; y <= 50; y += 1)
		{
			if (y1 == y2 && y == y1)
			{
				printf("#");
			}
			else if (y == y1)
			{
				printf("0");
			}
			else if (y == y2)
			{
				printf("*");
			}
			else if ((y > y1 && y < y2) || (y > y2 && y < y1))
			{
				printf("-");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return (0);
}