#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct date readDate(void);
int validateDate(struct date dateData);
void printDate(int comparisonResult);
int compareDates(struct date date1, struct date date2);

int main()
{
	struct date date1, date2;
	date1 = readDate();
	date2 = readDate();
	if (validateDate(date1) == 1 && validateDate(date2) == 1)
	{
		printDate(compareDates(date1, date2));
	}
	return (0);
}

struct date readDate(void)
{
	struct date dateData;
	printf("Enter date as : day,month,year : ");
	scanf("%d,%d,%d", &dateData.day, &dateData.month, &dateData.year);
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

void printDate(int comparisonResult)
{
	if (comparisonResult == 1)
	{
		printf("First date is earlier than the second!");
	}
	else
	{
		printf("First date is later than the second!");
	}
}

int compareDates(struct date date1, struct date date2)
{
	if (date1.year < date2.year || (date1.year == date2.year && date1.month < date2.month) || (date1.year == date2.year && date1.month == date2.month && date1.day < date2.day))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}