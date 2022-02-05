#include <stdio.h>
#include <math.h>
int main()
{
	printf("Number%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f\n\n", 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9);
	for (int i = 0; i <= 9; i += 1)
	{
		printf("%-6.1lf", (double)i);
		for (int j = 0; j <= 9; j += 1)
		{
			printf("%7.3lf", sqrt((double)i + ((double)j / 10)));
		}
		printf("\n");
	}
	return (0);
}