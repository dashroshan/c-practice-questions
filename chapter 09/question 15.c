#include <stdio.h>

void copyString(char toBeCopiedHere[], char toBeCopied[]);
int compareString(char string1[], char string2[]);
void addString(char toBeAddedHere[], char toBeAdded[]);

int main()
{
	char string[100];
	copyString(string, "This is the copied string!");
	printf("%s\n", string);
	printf("Result of comparing 2 equal strings : %d\n", compareString("test", "test"));
	printf("Result of comparing 2 unequal strings : %d\n", compareString("test", "taste"));
	addString(string, " This is added later!");
	printf("%s", string);
	return (0);
}

void copyString(char toBeCopiedHere[], char toBeCopied[])
{
	int length = 0;
	for (int i = 0; toBeCopied[i] != '\0'; i += 1)
	{
		toBeCopiedHere[i] = toBeCopied[i];
		length += 1;
	}
	toBeCopiedHere[length] = '\0';
}

int compareString(char string1[], char string2[])
{
	int difference = 0;
	for (int i = 0; string1[i] != '\0' && string2[i] != '\0'; i += 1)
	{
		difference += string1[i] - string2[i];
	}
	return (difference);
}

void addString(char toBeAddedHere[], char toBeAdded[])
{
	int oldLength = 0, newLength;
	for (int i = 0; toBeAddedHere[i] != '\0'; i += 1)
	{
		oldLength += 1;
	}
	newLength = oldLength;
	for (int j = oldLength; toBeAdded[j - oldLength] != '\0'; j += 1)
	{
		toBeAddedHere[j] = toBeAdded[j - oldLength];
		newLength += 1;
	}
	toBeAddedHere[newLength] = '\0';
}