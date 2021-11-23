#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct date readDate(int *daysToAdd);
int validateDate(struct date dateData);
void printDate(struct date dateData);
struct date nextDate(struct date dateData, int daysToAdd);

int main()
{
	struct date dateData;
	int daysToAdd;
	dateData = readDate(&daysToAdd);
	if (validateDate(dateData) == 1)
	{
		printDate(nextDate(dateData,daysToAdd));
	}
	return (0);
}

struct date readDate(int *daysToAdd)
{
	struct date dateData;
	printf("Enter date as : day,month,year : ");
	scanf("%d,%d,%d", &dateData.day, &dateData.month, &dateData.year);
	printf("Enter days to add : ");
	scanf("%d",daysToAdd);
	return (dateData);
}

int validateDate(struct date dateData)
{
	if (dateData.month > 12)
	{
		printf("Error : Invalid month!");
		return (0);
	}
	else if ((dateData.month == 1 || dateData.month == 3 || dateData.month == 5 || dateData.month == 7 || dateData.month == 8 || dateData.month == 10 || dateData.month == 12) && dateData.day > 31)
	{
		printf("Error : Invalid day!");
		return (0);
	}
	else if ((dateData.month == 4 || dateData.month == 6 || dateData.month == 9 || dateData.month == 11) && dateData.day > 30)
	{
		printf("Error : Invalid day!");
		return (0);
	}
	else if (dateData.month == 2 && ((dateData.year % 4 != 0 && dateData.day > 28) || (dateData.year % 4 == 0 && dateData.day > 29)))
	{
		printf("Error : Invalid day!");
		return (0);
	}
	return (1);
}

void printDate(struct date dateData)
{
	char monthName[15];
	switch (dateData.month)
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
	printf("%s %d, %d", monthName, dateData.day, dateData.year);
}

struct date nextDate(struct date dateData, int daysToAdd)
{
	int daysOfMonth[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
	while(daysToAdd>0)
	{
		daysOfMonth[2]=(dateData.year%4==0)?29:28;
		dateData.day+=1;
		if (dateData.day>daysOfMonth[dateData.month])
		{
			dateData.day=1;
			dateData.month+=1;
			if (dateData.month>12)
			{
				dateData.month=1;
				dateData.year+=1;
			}
		}
		daysToAdd-=1;
	}
	return(dateData);
}