#include <stdio.h>
#define MAXCHARS 20
#define TOTALSTUDENTS 2

struct date
{
	int day;
	int month;
	int year;
};

struct student_record
{
	char name[MAXCHARS];
	struct date dob;
	double marks;
};

void readData(struct student_record inputData[TOTALSTUDENTS]);
void sortData(struct student_record inputData[TOTALSTUDENTS]);
void printData(struct student_record inputData[TOTALSTUDENTS]);

int main()
{
	struct student_record studentData[TOTALSTUDENTS];
	readData(studentData);
	sortData(studentData);
	printData(studentData);
	return (0);
}

void readData(struct student_record inputData[TOTALSTUDENTS])
{
	for (int i = 0; i < TOTALSTUDENTS; i += 1)
	{
		printf("Enter : name,dd-mm-yyyy,marks : ");
		scanf("%s,%d-%d-%d,%lf", inputData[i].name, &inputData[i].dob.day, &inputData[i].dob.month, &inputData[i].dob.year, &inputData[i].marks);
	}
}

void sortData(struct student_record inputData[TOTALSTUDENTS])
{
	struct student_record temp;
	for (int i = 1; i < TOTALSTUDENTS; i += 1)
	{
		for (int j = 1; j < TOTALSTUDENTS; j += 1)
		{
			if (inputData[j].marks > inputData[j - 1].marks)
			{
				temp = inputData[j];
				inputData[j] = inputData[j - 1];
				inputData[j - 1] = temp;
			}
		}
	}
}

void printData(struct student_record inputData[TOTALSTUDENTS])
{
	for(int i=0; i<TOTALSTUDENTS;i+=1)
	{
		printf("Rank %d. %-20s%2d-%2d-%4d%0.2lf\n",i+1,inputData[i].name,inputData[i].dob.day,inputData[i].dob.month,inputData[i].dob.year,inputData[i].marks);
	}
}