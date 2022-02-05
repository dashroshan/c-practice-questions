#include <stdio.h>
#define MAXSIZE 50

void mergeArrays(int array1[], int array2[], int arrayMerged[], int array1Size, int array2Size, int *arrayMergedSize);

//Arguments given as : DATA1 DATA2 DATA
int main(int argc, char *argv[])
{
	FILE *fp1, *fp2, *fpMerged;
	int array1[MAXSIZE], array2[MAXSIZE], arrayMerged[MAXSIZE], arrayMergedSize = 0, length1 = 0, length2 = 0, num;
	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "r");
	while ((num = getw(fp1)) != EOF)
	{
		array1[length1] = num;
		length1 += 1;
	}
	while ((num = getw(fp2)) != EOF)
	{
		array2[length2] = num;
		length2 += 1;
	}
	fclose(fp1);
	fclose(fp2);

	mergeArrays(array1, array2, arrayMerged, length1, length2, &arrayMergedSize);

	fpMerged = fopen(argv[3], "w");
	for (int i = 0; i < arrayMergedSize; i += 1)
	{
		putw(arrayMerged[i], fpMerged);
	}
	fclose(fpMerged);

	return (0);
}

void mergeArrays(int array1[], int array2[], int arrayMerged[], int array1Size, int array2Size, int *arrayMergedSize)
{
	int array2MergedUpto = -1;
	for (int i = 0; i < array1Size; i += 1)
	{
		for (int j = array2MergedUpto + 1; array2[j] <= array1[i]; j += 1)
		{
			arrayMerged[*arrayMergedSize] = array2[j];
			*arrayMergedSize += 1;
			array2MergedUpto = j;
		}
		arrayMerged[*arrayMergedSize] = array1[i];
		*arrayMergedSize += 1;
	}
	for (int k = array2MergedUpto + 1; k < array2Size; k += 1)
	{
		arrayMerged[*arrayMergedSize] = array2[k];
		*arrayMergedSize += 1;
	}
}