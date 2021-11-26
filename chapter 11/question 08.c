#include <stdio.h>

int binarySearch(int *array, int length, int toSearch);
int found = 0;

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6}, length = sizeof(array) / sizeof(array[0]), toSearch = 3, pos;
	pos = binarySearch(array, length, toSearch);
	if (found == 0)
	{
		printf("Element not in array!");
	}
	else
	{
		printf("%d is at position %d in the array!", toSearch, pos + 1);
	}
	return (0);
}

int binarySearch(int *array, int length, int toSearch)
{
	int l, u, mid;
	l = 0, u = length - 1;
	while (l <= u)
	{
		mid = (l + u) / 2;
		if (toSearch == array[mid])
		{
			found = 1;
			break;
		}
		else if (toSearch < array[mid])
		{
			u = mid - 1;
		}
		else
			l = mid + 1;
	}
	return mid;
}