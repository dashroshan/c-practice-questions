#include <stdio.h>
#define PLUS +
#define MINUS -
#define PRODUCT *
#define DIVISION /
int main()
{
	printf("%d", 10 PLUS 10 MINUS 5 PRODUCT 2 DIVISION 5);
	return (0);
}