#include <stdio.h>
#define SIZE 5
int main()
{
	int matrix[SIZE][SIZE], jMirror;
	for (int i = 0; i <= SIZE - 1; i += 1)
	{
		for (int j = 0; j <= SIZE - 1; j += 1)
		{
			jMirror = (j != SIZE / 2 + 1 || SIZE % 2 == 0) ? SIZE - 1 - j : j;
			if (i < jMirror)
			{
				matrix[i][j] = 1;
			}
			else if (i > jMirror)
			{
				matrix[i][j] = -1;
			}
			else
			{
				matrix[i][j] = 0;
			}
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
	return (0);
}