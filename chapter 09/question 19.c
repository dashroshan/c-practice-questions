#include <stdio.h>
void leap(int year);
int main()
{
	int year;
	printf("Enter year : ");
	scanf("%d", &year);
	leap(year);
	return (0);
}

void leap(int year)
{
	if (year % 4 == 0)
	{
		printf("Its a leap year!");
	}
	else
	{
		printf("Its not a leap year!");
	}
}