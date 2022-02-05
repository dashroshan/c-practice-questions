#include <stdio.h>
int main()
{
	int total = 0;
	for (int i = 1; i <= 100; i += 1)
	{
		if (!(i % 2 == 0 || i % 3 == 0))
		{
			printf("%d ", i);
			total += 1;
		}
	}
	printf("\nTotal=%d", total);
	return (0);
}