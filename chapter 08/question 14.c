#include <stdio.h>
#include <stdlib.h>
#define TOTAL 3
int main()
{
	char data[TOTAL][2][10] = {
		{"1", "Roshan"},
		{"2", "Dash"},
		{"3", "Rdash"}},
		 input[10];
	printf("Enter name or roll : ");
	gets(input);
	for (int i = 0; i < TOTAL; i += 1)
	{
		if (atoi(data[i][0]) == atoi(input) || strcmp(data[i][1], input) == 0)
		{
			printf("Roll %s : %s", data[i][0], data[i][1]);
			goto found;
		}
	}
	printf("Not found!");
found:
	return (0);
}