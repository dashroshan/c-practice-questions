#include <stdio.h>
int main()
{
	char string[] = "test";
	printf("Length of the given string=%d", sizeof(string) / sizeof(string[0]) - 1);
	return (0);
}