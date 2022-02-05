#include <stdio.h>
int main()
{
	char word[20];
	printf("Enter text : ");
	scanf("%s", word);
	for (int i = 0; i <= strlen(word); i += 1)
	{
		printf("%c", word[i]);
		if (word[i] == 'D')
		{
			printf(" ");
		}
	}
	printf("\n");
	for (int i = 0; i <= strlen(word); i += 1)
	{
		printf("%c", word[i]);
		if (word[i] == 'D')
		{
			printf("\n");
		}
	}
	printf("\n");
	for (int i = 0; i <= strlen(word); i += 1)
	{
		if (word[i] == 'W')
		{
			printf("%c", word[i]);
			printf(".");
		}
		if (word[i] == 'P')
		{
			printf("%c", word[i]);
			printf(".");
		}
	}
	return (0);
}