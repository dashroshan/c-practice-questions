#include <stdio.h>
int main()
{
	int lineId = 1, num = 1;
	while (0 == 0)
	{
		for (int i = 1; i <= lineId; i += 1)
		{
			printf("%d ", num);
			num += 1;
			if (num > 91)
			{
				return (0);
			}
		}
		printf("\n");
		lineId += 1;
	}
	return (0);
}