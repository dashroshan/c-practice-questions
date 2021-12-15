#include <stdio.h>
#define STUDENTS 100
int main()
{
	double data[STUDENTS][4], s1Highest[2] = {0, 0}, s2Highest[2] = {0, 0}, s3Highest[2] = {0, 0}, totalHighest[2] = {0, 0};
	for (int i = 0; i <= STUDENTS - 1; i += 1)
	{
		printf("Enter roll and marks separated by spaces : ");
		scanf("%lf %lf %lf %lf", &data[i][0], &data[i][1], &data[i][2], &data[i][3]);
		if (data[i][1] > s1Highest[1])
		{
			s1Highest[0] = data[i][0];
			s1Highest[1] = data[i][1];
		}
		if (data[i][2] > s2Highest[1])
		{
			s2Highest[0] = data[i][0];
			s2Highest[1] = data[i][2];
		}
		if (data[i][3] > s3Highest[1])
		{
			s3Highest[0] = data[i][0];
			s3Highest[1] = data[i][3];
		}
		if (data[i][1] + data[i][2] + data[i][3] > totalHighest[1])
		{
			totalHighest[0] = data[i][0];
			totalHighest[1] = data[i][1] + data[i][2] + data[i][3];
		}
	}
	printf("Highest total marks secured by roll : %0.0lf\nHighest sub1 marks secured by roll : %0.0lf\nHighest sub2 marks secured by roll : %0.0lf\nHighest sub3 marks secured by roll : %0.0lf\n", totalHighest[0], s1Highest[0], s2Highest[0], s3Highest[0]);
	for (int j = 0; j <= STUDENTS - 1; j += 1)
	{
		printf("Roll %0.0lf. Total marks=%0.2lf\n", data[j][0], data[j][1] + data[j][2] + data[j][3]);
	}
	return (0);
}