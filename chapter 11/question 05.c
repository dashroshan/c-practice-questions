#include <stdio.h>

void deleteChar(char *text, char toDelete);

int main()
{
	char text[] = "Hello there!", toDelete = 'e';
	deleteChar(text, toDelete);
	puts(text);
	return (0);
}

void deleteChar(char *text, char toDelete)
{
	int id1 = 0, id2;
	do
	{
		if (*(text + id1) == toDelete)
		{
			id2 = id1;
			do
			{
				*(text + id2) = *(text + id2 + 1);
				id2 += 1;
			} while (*(text + id2) != '\0');
		}
		id1 += 1;
	} while (*(text + id1) != '\0');
}