#include <stdio.h>
int main()
{
	char source[30], target[30];
	FILE *fpSource, *fpTarget;
	char c, toRemove;
	printf("Source file : ");
	scanf("%[^\n]%*c", source);
	printf("Target file : ");
	scanf("%[^\n]%*c", target);
	printf("Enter character to delete : ");
	scanf("%c", &toRemove);
	fpSource = fopen(source, "r");
	fpTarget = fopen(target, "w");
	while ((c = getc(fpSource)) != EOF)
	{
		if (c != toRemove)
		{
			putc(c, fpTarget);
		}
	}
	fclose(fpSource);
	fclose(fpTarget);
	return (0);
}