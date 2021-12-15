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