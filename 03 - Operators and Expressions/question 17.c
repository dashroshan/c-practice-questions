#include <stdio.h>
#include <math.h>
int main()
{
	printf("%-15s%10s%10s\n\n", "X(Degrees)", "Sin(X)", "Cos(X)");
	for (int i = 0; i <= 180; i += 15)
	{
		printf("%-15d%10.3lf%10.3lf\n", i, sin((double)i), cos((double)i));
	}
	return (0);
}