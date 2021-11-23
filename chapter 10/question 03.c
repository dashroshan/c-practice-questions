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