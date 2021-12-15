#include <stdio.h>
#define TABLE 5
int main()
{
	for (int i = 1; i <= 10; i += 1)
	{
		printf("%-2d x %2d = %3d\n", TABLE, i, TABLE * i);
	}
	return (0);
}