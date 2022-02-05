#include <stdio.h>

void reverse(int *array, int length);

int main()
{
	int array[] = {1, 2, 3, 4, 5}, length = sizeof(array) / sizeof(array[0]);
	reverse(array, length);
	for (int i = 0; i < length; i += 1)
	{
		printf("%d ", *(array + i));
	}
	return (0);
}

void reverse(int *array, int length)
{
	int temp;
	for (int i = 0; i < length / 2; i += 1)
	{
		temp = *(array + i);
		*(array + i) = *(array + length - 1 - i);
		*(array + length - 1 - i) = temp;
	}
}