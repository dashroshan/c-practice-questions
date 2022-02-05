#include <stdio.h>
int main()
{
	int x = 1, y = 2, z = 3, temp;
	temp = z;
	z = x;
	x = y;
	y = temp;
	printf("%d %d %d", x, y, z);
	return (0);
}