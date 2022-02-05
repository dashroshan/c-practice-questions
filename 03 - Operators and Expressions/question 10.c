#include <stdio.h>
#include <math.h>
int main()
{
	double l, r;
	printf("Enter inductance L and resistance R separated by spaces : ");
	scanf("%lf %lf", &l, &r);
	for (double c = 0.01; c <= 0.1; c += 0.01)
	{
		printf("C = %0.2lf, Frequency = %0.3lf\n", c, sqrt((1 / (l * c)) - ((r * r) / (4.0 * c * c))));
	}
	return (0);
}