#include <stdio.h>
int main()
{
	char string[20], temp;
	printf("Enter string : ");
	gets(string);
	for (int i = 1; i <= strlen(string) - 1; i += 1)
	{
		for (int j = 1; j <= strlen(string) - 1; j += 1)
		{
			if (string[j] < string[j - 1])
			{
				temp = string[j];
				string[j] = string[j - 1];
				string[j - 1] = temp;
			}
		}
	}
	printf("In alphabetical order : %s", string);
}