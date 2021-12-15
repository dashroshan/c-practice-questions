#include <stdio.h>
int main()
{
	char string[256], word[10];
	int count = 0;
	printf("Enter string : ");
	gets(string);
	printf("Enter substring : ");
	gets(word);
	while (strstr(string, word))
	{
		count += 1;
		strcpy(string, strstr(string, word) + strlen(word));
	}
	printf("%s' is found %d times in the given string!", word, count);
	return (0);
}