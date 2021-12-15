#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter matrix size as mxn : ");
	scanf("%dx%d%*c", &m, &n);
	int matrix[m][n], newMatrix[n][m];
	printf("Enter matrix with elements of row separated by spaces :\n");
	for (int i = 0; i <= m - 1; i += 1)
	{
		for (int j = 0; j <= n - 1; j += 1)
		{
			scanf("%d%*c", &matrix[i][j]);
			newMatrix[j][i] = matrix[i][j];
		}
	}
	printf("Transpose of the given matrix :\n");
	for (int k = 0; k <= n - 1; k += 1)
	{
		for (int l = 0; l <= m - 1; l += 1)
		{
			printf("%d ", newMatrix[k][l]);
		}
		printf("\n");
	}

	return (0);
}