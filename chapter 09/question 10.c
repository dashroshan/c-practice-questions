#include <stdio.h>
#include <math.h>

void readData(void);
void calculate(void);

double side1, side2, side3;
int areaOrPerimeter;

int main()
{
	readData();
	calculate();
	return (0);
}

void readData(void)
{
	printf("Enter length of the 3 sides separated by spaces : ");
	scanf("%lf %lf %lf", &side1, &side2, &side3);
	printf("Enter 1 for area or 2 for perimeter : ");
	scanf("%d", &areaOrPerimeter);
}

void calculate(void)
{
	double s = (side1 + side2 + side3) / 2, area, perimeter;
	if (areaOrPerimeter == 1)
	{
		area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
		printf("Area = %0.3lf", area);
	}
	else
	{
		perimeter = 2 * s;
		printf("Perimeter = %0.3lf", perimeter);
	}
}