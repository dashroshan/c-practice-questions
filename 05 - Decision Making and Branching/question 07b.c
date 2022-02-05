#include <stdio.h>
#define TOTALLINES 15
int main()
{
	int lineId = 1, num, previousLine = 0;
	while (0 == 0)
	{
		num = (previousLine == 0) ? 1 : 0;
		previousLine = num;
		for (int i = 1; i <= lineId; i += 1)
		{
			printf("%d ", num);
			num = (num == 0) ? 1 : 0;
		}
		printf("\n");
		if (lineId == TOTALLINES)
		{
			return (0);
		}
		lineId += 1;
	}
	return (0);
}