#include <stdio.h>
int main()
{
	for (int i = 1; i <= 100; i += 1)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
	return (0);
}