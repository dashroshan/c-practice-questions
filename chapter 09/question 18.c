#include <stdio.h>
#include <string.h>
void toMonth(char monthName[], int monthNumber);
int main()
{
	char monthName[20];
	int monthNumber;
	printf("Enter month number : ");
	scanf("%d", &monthNumber);
	toMonth(monthName, monthNumber);
	printf("The month is %s!", monthName);
	return (0);
}

void toMonth(char monthName[], int monthNumber)
{
	switch (monthNumber)
	{
	case 1:
		strcpy(monthName, "January");
		break;

	case 2:
		strcpy(monthName, "February");
		break;

	case 3:
		strcpy(monthName, "March");
		break;

	case 4:
		strcpy(monthName, "April");
		break;

	case 5:
		strcpy(monthName, "May");
		break;

	case 6:
		strcpy(monthName, "June");
		break;

	case 7:
		strcpy(monthName, "July");
		break;

	case 8:
		strcpy(monthName, "August");
		break;

	case 9:
		strcpy(monthName, "September");
		break;

	case 10:
		strcpy(monthName, "October");
		break;

	case 11:
		strcpy(monthName, "November");
		break;

	case 12:
		strcpy(monthName, "December");
		break;
	}
}