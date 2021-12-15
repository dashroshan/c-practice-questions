#include <stdio.h>
int main()
{
	char character, temp;
	int total = 0;
	printf("Enter character : ");
	scanf("%c%*c", &character);
	printf("Enter string : ");
	while (0 == 0)
	{
		temp = getchar();
		if (temp == '\n')
		{
			break;
		}
		else if (temp == character)
		{
			total += 1;
		}
	}
	printf("'%c' is present %d times in the given string", character, total);
	return (0);
}