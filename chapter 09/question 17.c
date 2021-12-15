#include <stdio.h>
void locate(char toBeInsertedHere[], char toBeInserted[], int index);
int main()
{
	char string[50] = "The text is here!";
	locate(string, "inserted ", 8);
	printf("%s", string);
	return (0);
}

void locate(char toBeInsertedHere[], char toBeInserted[], int index)
{
	char temp[50];
	int indexAfterAdding = index + 1, lengthAfterIndex = 0;
	for (int i = index + 1; toBeInsertedHere[i] != '\0'; i += 1)
	{
		temp[i - index - 1] = toBeInsertedHere[i];
		lengthAfterIndex += 1;
	}
	for (int j = 0; toBeInserted[j] != '\0'; j += 1)
	{
		toBeInsertedHere[index + j + 1] = toBeInserted[j];
		indexAfterAdding += 1;
	}
	for (int k = indexAfterAdding; k < indexAfterAdding + lengthAfterIndex; k += 1)
	{
		toBeInsertedHere[k] = temp[k - indexAfterAdding];
	}
	toBeInsertedHere[indexAfterAdding + lengthAfterIndex] = '\0';
}