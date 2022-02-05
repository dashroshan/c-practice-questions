#include <stdio.h>
#define MAXNUMBERS 100
int main()
{
	int numbers[MAXNUMBERS], totalNumbers = 0, *ptr = numbers;
	char inputChar;
	while (inputChar != '\n')
	{
		scanf("%d%c", ptr, &inputChar);
		ptr += 1;
		totalNumbers += 1;
	}
	for (int i = 1; i <= totalNumbers; i += 1)
	{
		printf("%d ", *(ptr - i));
	}
	return (0);
}