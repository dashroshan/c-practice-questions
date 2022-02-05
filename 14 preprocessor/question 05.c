#include <stdio.h>
#define SUM_ARRAY(array, length, type, printType)      \
	{                                                  \
		type sum = 0;                                  \
		for (int i = 0; i < length; i += 1)            \
		{                                              \
			sum += array[i];                           \
		}                                              \
		printf("Sum of elements : %" #printType, sum); \
	}
int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	SUM_ARRAY(array, 5, int, d)
	return (0);
}