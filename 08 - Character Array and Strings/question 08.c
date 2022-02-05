#include <stdio.h>
int main()
{
	char string[20];
	printf("Enter string : ");
	gets(string);
	for (int i = 0; i <= strlen(string) / 2 - 1; i += 1)
	{
		if (string[i] != string[strlen(string) - i - 1])
		{
			printf("Not palindrome!");
			goto skip;
		}
	}
	printf("Palindrome!");
skip:
	return (0);
}