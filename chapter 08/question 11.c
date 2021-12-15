#include <stdio.h>
int main()
{
	char str1[50], str2[50];
	printf("Enter string 1 : ");
	gets(str1);
	printf("Enter string 2 : ");
	gets(str2);
	if (strcmp(str1, str2) > 0)
	{
		printf("First string is greater than the second!");
	}
	else if (strcmp(str1, str2) < 0)
	{
		printf("First string is less than the second!");
	}
	else
	{
		printf("Both strings are equal!");
	}
	return (0);
}