#include <stdio.h>
#define PRINT_ARRAY(array, length, type)     \
	{                                        \
		for (int i = 0; i < length; i += 1)  \
		{                                    \
			printf("%" #type " ", array[i]); \
		}                                    \
	}
int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	PRINT_ARRAY(array, 5, d)
	return (0);
}