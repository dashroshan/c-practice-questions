#include <stdio.h>

int compareFiles(char *file1, char *file2);

int main()
{
	printf("%d", compareFiles("data1.o", "data2.o"));
	return (0);
}

int compareFiles(char *file1, char *file2)
{
	FILE *fp1, *fp2;
	char c1, c2;
	fp1 = fopen(file1, "r");
	fp2 = fopen(file2, "r");
	while (((c1 = getc(fp1)) != EOF) && ((c2 = getc(fp2) != EOF)))
	{
		if (c1 != c2)
		{
			return (1);
		}
	}
	if ((feof(fp1) != 0) || (feof(fp1) != 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}