#include <stdio.h>
#define PRINT_VALUE(value1, value2, type) printf("%" #type " %" #type, value1, value2);
int main()
{
	PRINT_VALUE(1.5, 2.3, f)
	return (0);
}