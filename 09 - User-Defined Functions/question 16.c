#include <stdio.h>
int find(char string[], char toFind);
int main()
{
	printf("%d", find("This is the string to find the character in!", 'y'));
	return (0);
}

int find(char string[], char toFind)
{
	for (int i = 0; string[i] != '\0'; i += 1)
	{
		if (string[i] == toFind)
		{
			return (1);
		}
	}
	return (0);
}