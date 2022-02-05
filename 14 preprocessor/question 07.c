#include <stdio.h>
#define OPENING_BRACE {
#define CLOSING_BRACE }
#define BLANK_LINE printf("\n\n");
int main()
	OPENING_BRACE
	printf("Line 1");
BLANK_LINE
printf("Line 2");
return (0);
CLOSING_BRACE