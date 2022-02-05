#include <stdio.h>
#define STUDENTS 4
int main()
{
	int roll[STUDENTS], tempRoll;
	char name[STUDENTS][50], tempName[50];
	double mark[STUDENTS], tempMark;
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("Student %d. Roll,name,marks : ", i + 1);
		scanf("%d,%[^,],%lf", &roll[i], name[i], &mark[i]);
		fflush(stdin);
	}
	printf("\nRoll %20s %8s\n", "Name", "Mark");
	printf("(By alphabetical order of names)\n");
	for (int i = 1; i < STUDENTS; i += 1)
	{
		for (int j = 1; j < STUDENTS; j += 1)
		{
			if (strcmp(name[j], name[j - 1]) < 0)
			{
				strcpy(tempName, name[j]);
				strcpy(name[j], name[j - 1]);
				strcpy(name[j - 1], tempName);
				tempRoll = roll[j];
				roll[j] = roll[j - 1];
				roll[j - 1] = tempRoll;
				tempMark = mark[j];
				mark[j] = mark[j - 1];
				mark[j - 1] = tempMark;
			}
		}
	}
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("%4d %20s %8.2lf\n", roll[i], name[i], mark[i]);
	}

	printf("(By roll numbers)\n");
	for (int i = 1; i < STUDENTS; i += 1)
	{
		for (int j = 1; j < STUDENTS; j += 1)
		{
			if (roll[j] < roll[j - 1])
			{
				strcpy(tempName, name[j]);
				strcpy(name[j], name[j - 1]);
				strcpy(name[j - 1], tempName);
				tempRoll = roll[j];
				roll[j] = roll[j - 1];
				roll[j - 1] = tempRoll;
				tempMark = mark[j];
				mark[j] = mark[j - 1];
				mark[j - 1] = tempMark;
			}
		}
	}
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("%4d %20s %8.2lf\n", roll[i], name[i], mark[i]);
	}

	printf("(By marks)\n");
	for (int i = 1; i < STUDENTS; i += 1)
	{
		for (int j = 1; j < STUDENTS; j += 1)
		{
			if (mark[j] < mark[j - 1])
			{
				strcpy(tempName, name[j]);
				strcpy(name[j], name[j - 1]);
				strcpy(name[j - 1], tempName);
				tempRoll = roll[j];
				roll[j] = roll[j - 1];
				roll[j - 1] = tempRoll;
				tempMark = mark[j];
				mark[j] = mark[j - 1];
				mark[j - 1] = tempMark;
			}
		}
	}
	for (int i = 0; i < STUDENTS; i += 1)
	{
		printf("%4d %20s %8.2lf\n", roll[i], name[i], mark[i]);
	}
	return (0);
}