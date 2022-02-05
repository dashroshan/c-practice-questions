#include <stdio.h>
void exchange(void);
int x = 1, y = 2;

int main()
{
	printf("Values before : %d %d\n", x, y);
	exchange();
	printf("Values after : %d %d\n", x, y);
	return (0);
}

void exchange(void)
{
	int temp = x;
	x = y;
	y = temp;
}