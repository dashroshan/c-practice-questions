#include <stdio.h>
int main()
{
	char name[3][20];
	printf("Enter name : ");
	scanf("%s %s %s", name[0], name[1], name[2]);
	printf("%s %c. %s\n", name[0], name[1][0], name[2]);
	printf("%c.%c. %s\n", name[0][0], name[1][0], name[2]);
	printf("%s %c.%c.\n", name[2], name[0][0], name[1][0]);
	return (0);
}