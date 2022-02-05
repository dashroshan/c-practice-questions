#include <stdio.h>
int main()
{
	char s1[50], s2[50];
	int m, n;
	printf("Enter string : ");
	gets(s1);
	printf("Enter characters to copy : ");
	scanf("%d", &m);
	printf("Enter character position to start copying from : ");
	scanf("%d", &n);
	strncpy(s2, s1 + n - 1, m);
	printf("New string : %s", s2);
	return (0);
}