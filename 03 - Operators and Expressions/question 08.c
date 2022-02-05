#include <stdio.h>
int main()
{
	double u, a, finalTime, interval;
	printf("Enter initial velocity, acceleration, time interval, and final time separated by spaces : ");
	scanf("%lf %lf %lf %lf", &u, &a, &interval, &finalTime);
	for (double t = 0.0; t <= finalTime; t += interval)
	{
		printf("%04.2lf sec : dist = %0.2lf\n", t, u * t + 0.5 * a * t * t);
	}
	return (0);
}