#include <stdio.h>

char *nameOfDay(int n);

int main()
{
	puts(nameOfDay(3));
	return (0);
}

char *nameOfDay(int n)
{
	char *names[7] = {
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"};
	return (names[n - 1]);
}