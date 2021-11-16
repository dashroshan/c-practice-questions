/*Q8.1
#include <stdio.h>
int main()
{
	char name[30];
	printf("Enter your name : ");
	gets(name);
	printf("ASCII representation : ");
	for (int i = 0; i <= strlen(name) - 1; i += 1)
	{
		printf("%d ", name[i]);
	}
	return (0);
}
*/

/*Q8.2
#include <stdio.h>
int main()
{
	char name[20];
	printf("Who is the inventor of ? : ");
	for (int i = 1; i <= 3; i += 1)
	{
		gets(name);
		if (strcmp(name, "Dennis Ritchie") == 0 || strcmp(name, "dennis ritchie") == 0)
		{
			printf("Good!");
			break;
		}
		else if (i != 3)
		{
			printf("Try again : ");
		}
	}
	return (0);
}
*/

/*Q8.3
#include <stdio.h>
int main()
{
	char string[] = "sample text";
	int m = 2, n = 3;
	for (int i = 1; i <= m && n + i - 2 < strlen(string); i += 1)
	{
		printf("%c", string[n + i - 2]);
	}
	return (0);
}
*/

/*Q8.4
#include <stdio.h>
int main()
{
	char toSearch[10], str[100], temp[10];
	int count = 0, found, stringLen, searchLen;
	printf("Enter text : ");
	gets(str);
	printf("Enter word : ");
	gets(toSearch);
	stringLen = strlen(str);
	searchLen = strlen(toSearch);
	for (int i = 0; i <= stringLen - searchLen; i += 1)
	{
		found = 1;
		for (int j = 0; j < searchLen; j += 1)
		{
			if (str[i + j] != toSearch[j])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
		{
			count += 1;
		}
	}
	printf("Total occurrences of '%s' = %d", toSearch, count);
	return (0);
}
*/

/*Q8.5
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
*/

/*Q8.6
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
*/

/*Q8.8
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
*/