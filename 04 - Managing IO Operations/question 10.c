#include <stdio.h>
int main()
{
	int code[2];
	double price[2];
	printf("Enter code and price of fan seprated by space : ");
	scanf("%d %lf", &code[0], &price[0]);
	printf("Enter code and price of motor seprated by space : ");
	scanf("%d %lf", &code[1], &price[1]);
	printf("\n%-10s%-10s%-10s\n", "Name", "Code", "Price");
	printf("%-10s%-10d%-10.2lf\n", "Fan", code[0], price[0]);
	printf("%-10s%-10d%-10.2lf\n", "Motor", code[1], price[2]);
	return (0);
}