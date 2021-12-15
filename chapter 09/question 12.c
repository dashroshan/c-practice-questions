#include <stdio.h>
int m, n;
void calculate(int matrixMN[m][n], int matrixNM[n][m]);
int main()
{
	printf("Enter size of the matrix as mxn : ");
	scanf("%dx%d", &m, &n);
	int matrixMN[m][n], matrixNM[n][m];
	printf("Enter the %dx%d matrix :\n", m, n);
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < n; j += 1)
		{
			scanf("%d%*c", &matrixMN[i][j]);
		}
	}
	printf("Enter the %dx%d matrix :\n", n, m);
	for (int i = 0; i < n; i += 1)
	{
		for (int j = 0; j < m; j += 1)
		{
			scanf("%d%*c", &matrixNM[i][j]);
		}
	}
	calculate(matrixMN, matrixNM);
	return (0);
}

void calculate(int matrixMN[m][n], int matrixNM[n][m])
{
	int value;
	printf("Product of the 2 given matrices : \n");
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < m; j += 1)
		{
			value = 0;
			for (int k = 0; k < n; k += 1)
			{
				value += matrixMN[i][k] * matrixNM[k][j];
			}
			printf("%d ", value);
		}
		printf("\n");
	}
}