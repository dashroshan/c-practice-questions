#include <stdio.h>
int main()
{
	int x = 123456, y = 234567;
	short int z;
	z = x + y;
	printf("x=%d  y=%d  z=%hd", x, y, z);
	return (0);
}