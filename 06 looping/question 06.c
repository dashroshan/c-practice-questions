#include <stdio.h>
#include <math.h>
int main()
{
	int v, totalCombn = 0;
	printf("Enter value of return needed : ");
	scanf("%d", &v);
	for (int p = 1000; p <= 10000; p += 1000)
	{
		for (double r = 0.10; r < 0.205; r += 0.01)
		{
			for (int n = 1; n <= 10; n += 1)
			{
				if ((int)round(p * pow(1 + r, n)) == v)
				{
					printf("%d principal at %d%% interest for %d years\n", p, (int)(r * 100), n);
					totalCombn += 1;
				}
			}
		}
	}
	if (!totalCombn)
	{
		printf("No possible combination found!");
	}
	return (0);
}