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