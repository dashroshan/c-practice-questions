#include <stdio.h>
#include <math.h>
int main()
{
	printf("%-10s%10s%10s\n\n", "Number", "Sqrt", "Square");
	for (int i = 0; i <= 100; i += 10)
	{
		printf("%-10d%10.2lf%10d\n", i, sqrt(i), i * i);
	}
	return (0);
}