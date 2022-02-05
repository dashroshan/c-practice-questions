#include <stdio.h>
int main()
{
	double rupee;
	printf("Enter price in rupees : ");
	scanf("%lf", &rupee);
	printf("%0.2lfrs is %0.0lf paise", rupee, rupee * 100);
	return (0);
}