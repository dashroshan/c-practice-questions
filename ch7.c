/*Q7.1
#include <stdio.h>
#define PTS 3
int main()
{
	double points[PTS][2] = {
		{-3, -5},
		{-1.333, 0},
		{0, 4}};
	double m, c, n = PTS, xySum = 0, xSum = 0, ySum = 0, x2Sum = 0;

	for (int i = 0; i <= PTS - 1; i += 1)
	{
		xySum += points[i][0] * points[i][1];
		xSum += points[i][0];
		ySum += points[i][1];
		x2Sum += points[i][0] * points[i][0];
	}

	m = (n * xySum - xSum * ySum) / (n * x2Sum - xSum * xSum);
	c = (1 / n) * (ySum - m * xSum);
	printf("Line : y=%0.1lfx+%0.1lf", m, c);
	return (0);
}
*/

/*Q7.2
#include <stdio.h>
#define DAYS 31
int main()
{
	double temp[DAYS][10], highestTemp = -1000, lowestTemp = 1000;
	for (int i = 0; i <= DAYS - 1; i += 1)
	{
		printf("Enter temperatures in City 1 to 10 separated by spaces of day %d :\n", i + 1);
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &temp[i][0], &temp[i][1], &temp[i][2], &temp[i][3], &temp[i][4], &temp[i][5], &temp[i][6], &temp[i][7], &temp[i][8], &temp[i][9]);
	}
	for (int j = 0; j <= DAYS - 1; j += 1)
	{
		for (int k = 0; k <= 9; k += 1)
		{
			if (temp[j][k] > highestTemp)
			{
				highestTemp = temp[j][k];
			}
			if (temp[j][k] < lowestTemp)
			{
				lowestTemp = temp[j][k];
			}
		}
	}
	printf("Highest Temperature : %0.2lf\nLowest Temperature : %0.2lf", highestTemp, lowestTemp);
	return (0);
}
*/

/*Q7.3
#include <stdio.h>
int main()
{
	int count[5] = {0}, totalBallots, spoilt = 0, candidate;
	printf("Enter number of total ballots : ");
	scanf("%d", &totalBallots);
	for (int i = 0; i <= totalBallots - 1; i += 1)
	{
		printf("Enter candidate number of ballot %d : ", i + 1);
		scanf("%d", &candidate);
		if (candidate >= 1 && candidate <= 5)
		{
			count[candidate - 1] += 1;
		}
		else
		{
			spoilt += 1;
		}
	}
	printf("Spoilt ballots=%d\nTotal votes for:\nCandidate 1=%d\nCandidate 2=%d\nCandidate 3=%d\nCandidate 4=%d\nCandidate 5=%d\n", spoilt, count[0], count[1], count[2], count[3], count[4]);
	return (0);
}
*/

/*Q7.4
#include <stdio.h>
#define ROWS 10
int main()
{
	int data[ROWS + 2][ROWS + 2];
	for (int i = 0; i <= ROWS + 1; i += 1)
	{
		for (int j = 0; j <= ROWS + 1; j += 1)
		{
			if (i == j || j == 0)
			{
				data[i][j] = 1;
				printf("   1 ");
			}
			else if (j > i)
			{
				data[i][j] = 0;
				printf("     ");
			}
			else
			{
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
				printf("%4d ", data[i][j]);
			}
		}
		printf("\n");
	}
	return (0);
}
*/

/*Q7.5
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
*/

/*Q7.6
#include <stdio.h>
int main()
{
	int a[] = {13, 24, 39, 87, 102}, b[] = {17, 45, 97, 560};
	int aSize = sizeof(a) / sizeof(a[0]), bSize = sizeof(b) / sizeof(b[0]);
	int c[aSize + bSize], cId = 0, bUptoId = -1;
	for (int i = 0; i <= aSize - 1; i += 1)
	{
		for (int j = bUptoId + 1; j <= bSize - 1; j += 1)
		{
			if (b[j] <= a[i])
			{
				c[cId] = b[j];
				cId += 1;
				bUptoId = j;
			}
			else
			{
				break;
			}
		}
		c[cId] = a[i];
		cId += 1;
	}
	for (int k = bUptoId + 1; k <= bSize - 1; k += 1)
	{
		c[cId] = b[k];
		cId += 1;
	}
	printf("C={");
	for (int l = 0; l <= aSize + bSize - 1; l += 1)
	{
		printf("%d,", c[l]);
	}
	printf("}");
	return (0);
}
*/

/*Q7.7
#include <stdio.h>
#define N 2
int main()
{
	int a[N][N] = {
		{1, 2},
		{3, 4}};
	int b[N][N] = {
		{5, 6},
		{7, 8}};
	int c[N][N], cIJ;
	for (int i = 0; i <= N - 1; i += 1)
	{
		for (int j = 0; j <= N - 1; j += 1)
		{
			cIJ = 0;
			for (int k = 0; k <= N - 1; k += 1)
			{
				cIJ += a[i][k] * b[k][j];
			}
			c[i][j] = cIJ;
			printf("%d ", cIJ);
		}
		printf("\n");
	}
	return (0);
}
*/

/*Q7.8
#include <stdio.h>
#define SIZE 5
int main()
{
	int matrix[SIZE][SIZE], jMirror;
	for (int i = 0; i <= SIZE - 1; i += 1)
	{
		for (int j = 0; j <= SIZE - 1; j += 1)
		{
			jMirror = (j != SIZE / 2 + 1 || SIZE % 2 == 0) ? SIZE - 1 - j : j;
			if (i < jMirror)
			{
				matrix[i][j] = 1;
			}
			else if (i > jMirror)
			{
				matrix[i][j] = -1;
			}
			else
			{
				matrix[i][j] = 0;
			}
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
	return (0);
}
*/

/*Q7.9
#include <stdio.h>
int main()
{
	int unsorted[] = {1, 6, 5, 8, 3, 20, 9, 2}, largest[2], size, temp;
	size = sizeof(unsorted) / sizeof(unsorted[0]);
	while (size > 1)
	{
		largest[1] = -1000;
		for (int i = 0; i <= size - 1; i += 1)
		{
			if (unsorted[i] > largest[1])
			{
				largest[1] = unsorted[i];
				largest[0] = i;
			}
		}
		temp = unsorted[size - 1];
		unsorted[size - 1] = largest[1];
		unsorted[largest[0]] = temp;
		size -= 1;
	}
	for (int j = 0; j <= sizeof(unsorted) / sizeof(unsorted[0]) - 1; j += 1)
	{
		printf("%d ", unsorted[j]);
	}
	return (0);
}
*/

/*Q7.10
#include <stdio.h>
int main()
{
	int list[] = {10, 12, 13, 20, 50}, size, item = 20, id, firstId = 0;
	size = sizeof(list) / sizeof(list[0]);
	while (size > 0)
	{
		if ((size % 2 == 1 && list[firstId + size / 2] == item))
		{
			id = firstId + size / 2 + 1;
			break;
		}
		else if (size == 1)
		{
			id = -1;
			break;
		}
		else
		{
			if (list[firstId + size / 2] > item)
			{
				size = size / 2;
			}
			else
			{
				firstId += size / 2;
				size = size / 2;
			}
		}
	}
	if (id == -1)
	{
		printf("%d is a not present in the list", item);
	}
	else
	{
		printf("%d is the #%d element", item, id);
	}
	return (0);
}
*/

/*Q7.11
#include <stdio.h>
int main()
{
	char string[] = "test";
	printf("Length of the given string=%d", sizeof(string) / sizeof(string[0]) - 1);
	return (0);
}
*/

/*Q7.12
#include <stdio.h>
int main()
{
	char character, temp;
	int total = 0;
	printf("Enter character : ");
	scanf("%c%*c", &character);
	printf("Enter string : ");
	while (0 == 0)
	{
		temp = getchar();
		if (temp == '\n')
		{
			break;
		}
		else if (temp == character)
		{
			total += 1;
		}
	}
	printf("'%c' is present %d times in the given string", character, total);
	return (0);
}
*/