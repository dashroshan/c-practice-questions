#include <stdio.h>
#include <math.h>
int main()
{
	double number = 10.45678;
	printf("%0.2lfx10^1\n", number / 10.0);
	printf("%0.4lfx10^1\n", number / 10.0);
	printf("%0.8lfx10^1\n", number / 10.0);
	return (0);
}