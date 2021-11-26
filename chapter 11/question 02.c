#include <stdio.h>
#include <math.h>

void calculateRoots(double *ptrToConstants, double *roots);

int main()
{
	double eqnConstants[3], *ptrToConstants = eqnConstants, roots[2], *ptrToRoots = roots;
	printf("Enter the equation as ax2+bx+c : ");
	scanf("%lfx2+%lfx+%lf", ptrToConstants, ptrToConstants + 1, ptrToConstants + 2);
	calculateRoots(eqnConstants, roots);
	printf("Roots : %0.3lf and %0.3lf", *ptrToRoots, *(ptrToRoots + 1));
	return (0);
}

void calculateRoots(double *ptrToConstants, double *roots)
{
	double d = sqrt(*(ptrToConstants + 1) * *(ptrToConstants + 1) - 4 * *ptrToConstants * *(ptrToConstants + 2));
	*roots = (-*(ptrToConstants + 1) + d) / (2 * *ptrToConstants);
	*(roots + 1) = (-*(ptrToConstants + 1) - d) / (2 * *ptrToConstants);
}