#include <stdio.h>

int compare(int *array1, int *array2, int length1, int length2);

int main()
{
	int array1[] = {1, 2, 3, 4, 5}, array2[] = {1, 2, 3, 6, 5}, length1 = sizeof(array1) / sizeof(array1[0]), length2 = sizeof(array2) / sizeof(array2[0]);
	printf("%d", compare(array1, array2, length1, length2));
	return (0);
}

int compare(int *array1, int *array2, int length1, int length2)
{
	if (length1 != length2)
	{
		return (0);
	}
	for (int i = 0; i < length1; i += 1)
	{
		if (*(array1 + i) != *(array2 + i))
		{
			return (0);
		}
	}
	return (1);
}