#include <stdio.h>

void copyContents(char *sourceFile, char *destinationFile);

int main()
{
	copyContents("data","dataCopy");
	return(0);
}

void copyContents(char *sourceFile, char *destinationFile)
{
	FILE *fpSource, *fpDestination;
	char c;
	fpSource=fopen(sourceFile,"r");
	fpDestination=fopen(destinationFile,"w");
	while((c=getc(fpSource))!=EOF)
	{
		putc(c,fpDestination);
	}
	fclose(fpSource);
	fclose(fpDestination);
}