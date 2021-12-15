#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter matrix size as mxn : ");
	scanf("%dx%d%*c", &m, &n);
	int a[m][n], b[m][n];
	printf("Enter matrix A with elements of row separated by spaces :\n");
	for (int i = 0; i <= m - 1; i += 1)
	{
		for (int j = 0; j <= n - 1; j += 1)
		{
			scanf("%d%*c", &a[i][j]);
		}
	}
	printf("Enter matrix B with elements of row separated by spaces :\n");
	for (int i = 0; i <= m - 1; i += 1)
	{
		for (int j = 0; j <= n - 1; j += 1)
		{
			scanf("%d%*c", &b[i][j]);
		}
	}
	printf("A+B=\n");
	for (int i = 0; i <= m - 1; i += 1)
	{
		for (int j = 0; j <= n - 1; j += 1)
		{
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	printf("A-B=\n");
	for (int i = 0; i <= m - 1; i += 1)
	{
		for (int j = 0; j <= n - 1; j += 1)
		{
			printf("%d ", a[i][j] - b[i][j]);
		}
		printf("\n");
	}
	return (0);
}