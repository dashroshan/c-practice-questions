#include <stdio.h>
int main()
{
	char fileName[30], c;
	int offset;
	FILE *fp;
	printf("Enter the file name : ");
	scanf("%[^\n]%*c", fileName);
	printf("Enter offset value : ");
	scanf("%d", &offset);
	fp = fopen(fileName, "r");

	if (fp == NULL)
	{
		printf("File not found!");
		return (0);
	}

	fseek(fp, offset, (offset >= 0) ? 0 : 2);
	while ((c = getc(fp)) != EOF)
	{
		putchar(c);
	}

	fclose(fp);
	return (0);
}