#include <stdio.h>
int main()
{
	char source[30], target[30];
	FILE *fpSource, *fpTarget;
	char c;
	printf("Source file : ");
	scanf("%[^\n]%*c", source);
	printf("Target file : ");
	scanf("%[^\n]", target);
	fpSource = fopen(source, "r");
	fpTarget = fopen(target, "w");
	while ((c = getc(fpSource)) != EOF)
	{
		putc(c, fpTarget);
	}
	fclose(fpSource);
	fclose(fpTarget);
	return (0);
}