/* Question : Case Study
#include <stdio.h>
double startPt, endPt, totalArea;
int numTraps;

void inputData(void);		//Updates the global variables with data from user
void findArea(void);		//Calculates and updates the totalArea global variable
double valueOfFn(double x); //Function whose area is to be found

int main()
{
	inputData();
	findArea();
	printf("Area = %lf", totalArea);
	return (0);
}

void inputData(void)
{
	printf("Enter lower limit : ");
	scanf("%lf", &startPt);
	printf("Enter upper limit : ");
	scanf("%lf", &endPt);
	printf("Enter total number of trapeziums to use : ");
	scanf("%d", &numTraps);
}

void findArea(void)
{
	double trapWidth = (endPt - startPt) / (double)numTraps;
	for (int i = 1; i <= numTraps; i += 1)
	{
		//Area of a trapezoid = 1/2 * (height 1 + height 2) * base width
		totalArea += 0.5 * (valueOfFn((i - 1) * trapWidth) + valueOfFn(i * trapWidth)) * trapWidth;
	}
}

double valueOfFn(double x)
{
	//The function whose area is to be found
	//Here y=x^2+1 function is used
	return (x * x + 1);
}
*/

/* Question : 9.1
#include <stdio.h>
void exchange(void);
int x = 1, y = 2;

int main()
{
	printf("Values before : %d %d\n", x, y);
	exchange();
	printf("Values after : %d %d\n", x, y);
	return (0);
}

void exchange(void)
{
	int temp = x;
	x = y;
	y = temp;
}
*/

/* Question : 9.2
#include <stdio.h>
void space(int x);

int main()
{
	int x;
	printf("Enter total positions to space : ");
	scanf("%d", &x);
	printf("1");
	space(x);
	printf("2");
	return (0);
}

void space(int x)
{
	for (int i = 1; i <= x; i += 1)
	{
		printf(" ");
	}
}
*/

/* Question : 9.3
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
*/

/* Question : 9.4 : Cannot understand the expression given */

/* Question : 9.5
#include <stdio.h>
void printSeries(int n);
int main()
{
	int n;
	printf("Enter total terms of the Fibonacci series needed : ");
	scanf("%d", &n);
	printSeries(n);
	return (0);
}

void printSeries(int n)
{
	int nMinus1 = 1, nMinus2 = 1;
	printf("1 1 ");
	for (int i = 3; i <= n; i += 1)
	{
		nMinus2 = nMinus1;
		nMinus1 += nMinus2;
		printf("%d ", nMinus1);
	}
}
*/

/* Question : 9.6
#include <stdio.h>
#include <math.h>
double roundFn(double num, int roundTo);
int main()
{
	double num;
	int roundTo;
	printf("Enter number : ");
	scanf("%lf", &num);
	printf("Enter total decimal places to round off to : ");
	scanf("%d", &roundTo);
	printf("Rounded value : %.*lf", roundTo, roundFn(num, roundTo));
	return (0);
}

double roundFn(double num, int roundTo)
{
	//round function rounds off the number to the nearest integer
	//To convert for example 1.2345 to 2 decimal places, we can multiply it with 10^2, use the round function and divide by 10^2
	//1.2345 * 10^2 = 123.45
	//rounding it gives 123, 123*10^2=1.23 which is the required value
	return (round(num * pow(10, roundTo)) / pow(10, roundTo));
}
*/

/* Question : 9.7
#include <stdio.h>
int prime(int num);
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	if (prime(num) == 1)
	{
		printf("Prime!");
	}
	else
	{
		printf("Not Prime!");
	}
	return (0);
}

int prime(int num)
{
	for (int i = 2; i < num; i += 1)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
*/

/* Question : 9.8
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
*/