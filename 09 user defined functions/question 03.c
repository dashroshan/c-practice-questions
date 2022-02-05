#include <stdio.h>
double evaluateFn(double value, int termId, double xPower, int factorial, int multiplier);

double xVal;
int totalTerms;

int main()
{
	printf("Enter value of x : ");
	scanf("%lf", &xVal);
	printf("Enter total terms to calculate : ");
	scanf("%d", &totalTerms);
	printf("Answer = %lf", evaluateFn(xVal, 2, 1, 1, -1)); //The value of 1st term is entered directly here as this makes it easier to calculate the factorial and power by referencing 2 previous numbers
	return (0);
}

//value : The calculated total value until then
//termId : What term is going to be calculated
//xPower, factorial : Respective values until then
//multiplier : +1 or -1 which is to be multiplied to the term
double evaluateFn(double value, int termId, double xPower, int factorial, int multiplier)
{
	if (termId > totalTerms)
	{
		return (value);
	}
	else
	{
		xPower *= xVal * xVal;
		factorial *= (1 + (termId - 1) * 2) * ((termId - 1) * 2);
		return (evaluateFn(value + multiplier * xPower / (double)factorial, termId + 1, xPower, factorial, multiplier * (-1)));
	}
}