#include <stdio.h>
#define LINES 5
int main()
{
	for (int lineId = 1; lineId <= LINES; lineId += 1)
	{
		for (int i = 1; i <= lineId; i += 1)
		{
			printf("%d", lineId);
		}
		printf("\n");
	}
	return (0);
}