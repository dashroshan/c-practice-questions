#include <stdio.h>
#define N 2
int main()
{
	int a[N][N] = {
		{1, 2},
		{3, 4}};
	int b[N][N] = {
		{5, 6},
		{7, 8}};
	int c[N][N], cIJ;
	for (int i = 0; i <= N - 1; i += 1)
	{
		for (int j = 0; j <= N - 1; j += 1)
		{
			cIJ = 0;
			for (int k = 0; k <= N - 1; k += 1)
			{
				cIJ += a[i][k] * b[k][j];
			}
			c[i][j] = cIJ;
			printf("%d ", cIJ);
		}
		printf("\n");
	}
	return (0);
}