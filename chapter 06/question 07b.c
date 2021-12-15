#include <stdio.h>
#define LINES 5
int main()
{
	for (int lineId = LINES; lineId >= 1; lineId -= 1)
	{
		for (int i = 1; i <= (LINES - lineId); i += 1)
		{
			printf(" ");
		}
		for (int j = 1; j <= lineId; j += 1)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}