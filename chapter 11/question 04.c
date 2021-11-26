#include <stdio.h>
#define M 2
#define N 3

void addMatrices(int *matrix1, int *matrix2, int *sumMatrix);

int main()
{
	int matrix1[M][N] = {
		{1, 2, 3},
		{4, 5, 6}},
		matrix2[M][N] = {{7, 8, 9}, {10, 11, 12}}, sumMatrix[M][N], *ptrToSum = sumMatrix;
	addMatrices(matrix1, matrix2, sumMatrix);
	for (int i = 0; i < M * N; i += 1)
	{
		if (i % N == 0 && i != 0)
		{
			printf("\n");
		}
		printf("%-3d ", *(ptrToSum + i));
	}
	return (0);
}

void addMatrices(int *matrix1, int *matrix2, int *sumMatrix)
{
	for (int i = 0; i < M * N; i += 1)
	{
		*(sumMatrix + i) = *(matrix1 + i) + *(matrix2 + i);
	}
}