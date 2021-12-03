#include <stdio.h>

void appendFile(char *toBeAppendedWith, char *toBeAppended);

int main()
{
	appendFile("data1.o", "data2.o");
	return (0);
}

void appendFile(char *toBeAppendedWith, char *toBeAppended)
{
	FILE *fpToBeAppendedWith, *fpToBeAppended;
	char c;
	fpToBeAppendedWith = fopen(toBeAppendedWith, "a");
	fpToBeAppended = fopen(toBeAppended, "r");
	while ((c = getc(fpToBeAppended)) != EOF)
	{
		putc(c, fpToBeAppendedWith);
	}
	fclose(fpToBeAppendedWith);
	fclose(fpToBeAppended);
}