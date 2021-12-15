#include <stdio.h>
#define MAXSIZE 50

int array1[MAXSIZE], array1Size = 0, array2[MAXSIZE], array2Size = 0, arrayMerged[MAXSIZE], arrayMergedSize = 0;
void readArrays(void);
void sortArray(int array[], int size);
void mergeArrays(void);
void printMergedArray(void);

int main()
{
	readArrays();
	sortArray(array1, array1Size);
	sortArray(array2, array2Size);
	mergeArrays();
	printMergedArray();
	return (0);
}

void readArrays(void)
{
	char spaceOrNewline;
	printf("Enter the first integer array with elements separated by spaces : ");
	for (int i = 0; spaceOrNewline != '\n'; i += 1)
	{
		scanf("%d%c", &array1[i], &spaceOrNewline);
		array1Size += 1;
	}
	spaceOrNewline = ' ';
	printf("Enter the second integer array with elements separated by spaces : ");
	for (int i = 0; spaceOrNewline != '\n'; i += 1)
	{
		scanf("%d%c", &array2[i], &spaceOrNewline);
		array2Size += 1;
	}
}

void sortArray(int array[], int size)
{
	int temp;
	for (int i = 1; i < size; i += 1)
	{
		for (int j = 1; j < size; j += 1)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}

void mergeArrays(void)
{
	int array2MergedUpto = -1;
	for (int i = 0; i < array1Size; i += 1)
	{
		for (int j = array2MergedUpto + 1; array2[j] <= array1[i]; j += 1)
		{
			arrayMerged[arrayMergedSize] = array2[j];
			arrayMergedSize += 1;
			array2MergedUpto = j;
		}
		arrayMerged[arrayMergedSize] = array1[i];
		arrayMergedSize += 1;
	}
	for (int k = array2MergedUpto + 1; k < array2Size; k += 1)
	{
		arrayMerged[arrayMergedSize] = array2[k];
		arrayMergedSize += 1;
	}
}

void printMergedArray(void)
{
	printf("Merged array : ");
	for (int i = 0; i < arrayMergedSize; i += 1)
	{
		printf("%d ", arrayMerged[i]);
	}
}