#include <stdio.h>

void insert(int *array, int lengthOfArray, int toInsert);

int main()
{
	int array[6] = {1, 3, 4, 5, 6}, toInsert = 2, lengthOfArray = 5;
	insert(array, lengthOfArray, toInsert);
	for (int i = 0; i <= lengthOfArray; i += 1)
	{
		printf("%d ", *(array + i));
	}
	return (0);
}

void insert(int *array, int lengthOfArray, int toInsert)
{
	for (int i = 0; i < lengthOfArray; i += 1)
	{
		if (*(array + i) > toInsert)
		{
			for (int j = lengthOfArray - 1; j >= i; j -= 1)
			{
				*(array + j + 1) = *(array + j);
			}
			*(array + i) = toInsert;
			break;
		}
	}
}