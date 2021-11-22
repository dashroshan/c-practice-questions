/* Question : 10.1
#include <stdio.h>

struct time_struct
{
	int hour;
	int minute;
	int second;
};

struct time_struct addTime(int hour, int min, int sec);

int main()
{
	int hour, min, sec;
	struct time_struct time;
	printf("Enter time as hour,minute,second : ");
	scanf("%d,%d,%d", &hour, &min, &sec);
	time = addTime(hour, min, sec);
	printf("%d:%d:%d", time.hour, time.minute, time.second);
	return (0);
}

struct time_struct addTime(int hour, int min, int sec)
{
	if (sec >= 60)
	{
		min += sec / 60;
		sec %= 60;
	}
	if (min >= 60)
	{
		hour += min / 60;
		min %= 60;
	}
	struct time_struct time = {hour, min, sec};
	return (time);
}
*/

/* Question : 10.2
#include <stdio.h>

struct time_struct
{
	int hour;
	int minute;
	int second;
};

struct time_struct addTime(int hour, int min, int sec);
void printTime(struct time_struct time);

int main()
{
	int hour, min, sec;
	struct time_struct time;
	printf("Enter time as hour,minute,second : ");
	scanf("%d,%d,%d", &hour, &min, &sec);
	time = addTime(hour, min, sec);
	printTime(time);
	return (0);
}

struct time_struct addTime(int hour, int min, int sec)
{
	if (sec >= 60)
	{
		min += sec / 60;
		sec %= 60;
	}
	if (min >= 60)
	{
		hour += min / 60;
		min %= 60;
	}
	struct time_struct time = {hour, min, sec};
	return (time);
}

void printTime(struct time_struct time)
{
	printf("%d:%d:%d", time.hour, time.minute, time.second);
}
*/

/* Question : 10.3
#include <stdio.h>

struct time_struct
{
	int hour;
	int minute;
	int second;
};

struct time_struct addTime(int hour, int min, int sec);
void printTime(struct time_struct time);
struct time_struct update(struct time_struct time);

int main()
{
	int hour, min, sec;
	struct time_struct time;
	printf("Enter time as hour,minute,second : ");
	scanf("%d,%d,%d", &hour, &min, &sec);
	time = addTime(hour, min, sec);
	time = update(time);
	printTime(time);
	return (0);
}

struct time_struct addTime(int hour, int min, int sec)
{
	struct time_struct time = {hour, min, sec};
	return (time);
}

void printTime(struct time_struct time)
{
	printf("%d:%d:%d", time.hour, time.minute, time.second);
}

struct time_struct update(struct time_struct time)
{
	time.second += 1;
	if (time.second >= 60)
	{
		time.minute += time.second / 60;
		time.second %= 60;
	}
	if (time.minute >= 60)
	{
		time.hour += time.minute / 60;
		time.minute %= 60;
	}
	if (time.hour >= 24)
	{
		time.hour %= 24;
	}
	return (time);
}
*/

/* Question : 10.4
#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct date readDate(void);
int validateDate(struct date dateData);
void printDate(struct date dateData);

int main()
{
	struct date dateData;
	dateData = readDate();
	if (validateDate(dateData) == 1)
	{
		printDate(dateData);
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
*/