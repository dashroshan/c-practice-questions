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