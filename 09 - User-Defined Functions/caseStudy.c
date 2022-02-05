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