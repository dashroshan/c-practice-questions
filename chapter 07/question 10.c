#include <stdio.h>
int main()
{
	int list[] = {10, 12, 13, 20, 50}, size, item = 20, id, firstId = 0;
	size = sizeof(list) / sizeof(list[0]);
	while (size > 0)
	{
		if ((size % 2 == 1 && list[firstId + size / 2] == item))
		{
			id = firstId + size / 2 + 1;
			break;
		}
		else if (size == 1)
		{
			id = -1;
			break;
		}
		else
		{
			if (list[firstId + size / 2] > item)
			{
				size = size / 2;
			}
			else
			{
				firstId += size / 2;
				size = size / 2;
			}
		}
	}
	if (id == -1)
	{
		printf("%d is a not present in the list", item);
	}
	else
	{
		printf("%d is the #%d element", item, id);
	}
	return (0);
}