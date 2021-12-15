#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], newstr[100], word[10], replacement[10], temp[10];
	printf("Enter text : ");
	gets(str);
	printf("Enter word to be replaced : ");
	gets(word);
	printf("Enter replacement word : ");
	gets(replacement);
	for (int i = 0; i <= strlen(str); i += 1)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (strcmp(temp, word) == 0)
			{
				strcat(newstr, replacement);
			}
			else
			{
				strcat(newstr, temp);
			}
			strcat(newstr, " ");
			strcpy(temp, "");
		}
		else
		{
			strncat(temp, &str[i], 1);
		}
	}
	printf("New text : %s", newstr);

	return (0);
}