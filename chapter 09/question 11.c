#include <stdio.h>
int m, n;
int largest(int matrix[m][n]);
int main()
{
	printf("Enter size of the matrix as mxn : ");
	scanf("%dx%d", &m, &n);
	printf("Enter matrix with elements of row separated by spaces :\n");
	int matrix[m][n];
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < n; j += 1)
		{
			scanf("%d%*c", &matrix[i][j]);
		}
	}
	printf("%d is the largest element in the given matrix!", largest(matrix));
	return (0);
}

int largest(int matrix[m][n])
{
	int large = -1000;
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < n; j += 1)
		{
			if (matrix[i][j] > large)
			{
				large = matrix[i][j];
			}
		}
	}
	return (large);
}