#include <stdio.h>

int strcomp(char *string1, char *string2);
void swap(char **string1, char **string2);
void sort(char *text[], int length);
int (*strcompPtr)() = strcomp;
void (*swapPtr)() = swap;

int main()
{
	char *text[4] = {"roshan", "jitesh", "abhinash", "ritish"};
	int length = 4;
	sort(text, length);
	for (int i = 0; i < length; i += 1)
	{
		printf("%s\n", *(text + i));
	}
	return (0);
}

int strcomp(char *string1, char *string2)
{
	int diff = 0;
	for (int i = 0; *(string1 + i) != '\0' && *(string2 + i) != '\0'; i += 1)
	{
		diff += *(string1 + i) - *(string2 + i);
	}
	return (diff);
}

void swap(char **string1, char **string2)
{
	char *temp = *string1;
	*string1 = *string2;
	*string2 = temp;
}

void sort(char *text[], int length)
{
	for (int i = 1; i < length; i += 1)
	{
		for (int j = 1; j < length; j += 1)
		{
			if ((*strcompPtr)(*(text + j - 1), *(text + j)) > 0)
			{
				(*swapPtr)((text + j - 1), (text + j));
			}
		}
	}
}