#include <stdio.h>
int main()
{
	int unsorted[] = {1, 6, 5, 8, 3, 20, 9, 2}, largest[2], size, temp;
	size = sizeof(unsorted) / sizeof(unsorted[0]);
	while (size > 1)
	{
		largest[1] = -1000;
		for (int i = 0; i <= size - 1; i += 1)
		{
			if (unsorted[i] > largest[1])
			{
				largest[1] = unsorted[i];
				largest[0] = i;
			}
		}
		temp = unsorted[size - 1];
		unsorted[size - 1] = largest[1];
		unsorted[largest[0]] = temp;
		size -= 1;
	}
	for (int j = 0; j <= sizeof(unsorted) / sizeof(unsorted[0]) - 1; j += 1)
	{
		printf("%d ", unsorted[j]);
	}
	return (0);
}