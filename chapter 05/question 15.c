#include <stdio.h>
#include <math.h>
int main()
{
	char T;
	double x;
	printf("Enter s for sin, c for cos, or t for tan : ");
	T = getchar();
	printf("Enter angle in radian : ");
	scanf("%lf", &x);
	switch (T)
	{
	case 's':
	case 'S':
		printf("sin(%0.3lf)=%0.3lf", x, sin(x));
		break;
	case 'c':
	case 'C':
		printf("cos(%0.3lf)=%0.3lf", x, cos(x));
		break;
	case 't':
	case 'T':
		printf("tan(%0.3lf)=%0.3lf", x, tan(x));
		break;
	}
	return (0);
}