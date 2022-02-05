#include <stdio.h>
void toUpperCase(char string[], int length);
int main()
{
	char string[256];
	printf("Enter string : ");
	gets(string);
	toUpperCase(string, strlen(string));
	printf("%s", string);
	return (0);
}

void toUpperCase(char string[], int length)
{
	for (int i = 0; i < length; i += 1)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32; //a=97 and A=65, a-A=32, so to convert a to A we subtract 32
		}
	}
}