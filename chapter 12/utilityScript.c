#include <stdio.h>

void createFile(char *name, char *contents);
void createFileWNums(char *name, int num[], int length);
void displayFile(char *name);
void displayFileWNums(char *name);

int main()
{
	displayFile("data.o");
	return (0);
}

void createFile(char *name, char *contents)
{
	FILE *fp;
	fp = fopen(name, "w");
	fprintf(fp, "%s", contents);
	fclose(fp);
}

void createFileWNums(char *name, int num[], int length)
{
	FILE *fp;
	fp = fopen(name, "w");
	for (int i = 0; i < length; i += 1)
	{
		putw(num[i], fp);
	}
	fclose(fp);
}

void displayFile(char *name)
{
	FILE *fp;
	char c;
	fp = fopen(name, "r");
	while ((c = getc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);
}

void displayFileWNums(char *name)
{
	FILE *fp;
	int num;
	fp = fopen(name, "r");
	while ((num = getw(fp)) != EOF)
	{
		printf("%d ", num);
	}
	fclose(fp);
}