#include <stdio.h>
int main()
{
	double a, b, c, sum, avg, largest, smallest;
	printf("Enter 3 numbers separated by spaces : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	sum = a + b + c;
	avg = sum / 3.0;
	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	smallest = (a < b) ? a : b;
	smallest = (smallest < c) ? smallest : c;
	printf("Sum = %0.3lf\nAverage = %0.3lf\nLargest = %0.3lf\nSmallest = %0.3lf", sum, avg, largest, smallest);
	return (0);
}