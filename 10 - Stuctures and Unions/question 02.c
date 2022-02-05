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