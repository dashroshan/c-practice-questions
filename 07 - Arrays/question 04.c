#include <stdio.h>
#define ROWS 10
int main()
{
	int data[ROWS + 2][ROWS + 2];
	for (int i = 0; i <= ROWS + 1; i += 1)
	{
		for (int j = 0; j <= ROWS + 1; j += 1)
		{
			if (i == j || j == 0)
			{
				data[i][j] = 1;
				printf("   1 ");
			}
			else if (j > i)
			{
				data[i][j] = 0;
				printf("     ");
			}
			else
			{
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
				printf("%4d ", data[i][j]);
			}
		}
		printf("\n");
	}
	return (0);
}