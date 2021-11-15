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