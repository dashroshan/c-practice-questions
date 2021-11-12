/*Q6.1
#include <stdio.h>
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	while (num > 0)
	{
		printf("%d", num % 10);
		num /= 10;
	}
	return (0);
}
*/

/*Q6.2
#include <stdio.h>
int main()
{
	long int m, product = 1;
	printf("Enter m : ");
	scanf("%ld", &m);
	for (int i = 1; i <= m; i += 1)
	{
		product *= i;
	}
	printf("m!=%ld", product);
	return (0);
}
*/

/*Q6.3
#include <stdio.h>
int main()
{
	long int num, sum = 0;
	printf("Enter number : ");
	scanf("%ld", &num);
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	printf("Sum of digits is %ld", sum);
	return (0);
}
*/

/*Q6.4
#include <stdio.h>
int main()
{
	int num1 = 1, num2 = 1, total = 2, m, sum;
	printf("Enter number greater than 2 : ");
	scanf("%d", &m);
	printf("1 1 ");
	do
	{
		sum = num1 + num2;
		printf("%d ", sum);
		num1 = num2;
		num2 = sum;
		total += 1;
	} while (total <= m);
	return (0);
}
*/

/*Q6.5
#include <stdio.h>
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	for (; num > 0;)
	{
		printf("%d", num % 10);
		num /= 10;
	}
	return (0);
}
*/

/*Q6.6
#include <stdio.h>
#include <math.h>
int main()
{
	int v, totalCombn = 0;
	printf("Enter value of return needed : ");
	scanf("%d", &v);
	for (int p = 1000; p <= 10000; p += 1000)
	{
		for (double r = 0.10; r < 0.205; r += 0.01)
		{
			for (int n = 1; n <= 10; n += 1)
			{
				if ((int)round(p * pow(1 + r, n)) == v)
				{
					printf("%d principal at %d%% interest for %d years\n", p, (int)(r * 100), n);
					totalCombn += 1;
				}
			}
		}
	}
	if (!totalCombn)
	{
		printf("No possible combination found!");
	}
	return (0);
}*/

/*Q6.7a
#include <stdio.h>
#define LINES 5
int main()
{
	for (int lineId = 1; lineId <= LINES; lineId += 1)
	{
		for (int i = 1; i <= lineId; i += 1)
		{
			printf("%d", lineId);
		}
		printf("\n");
	}
	return (0);
}
*/

/*Q6.7b
#include <stdio.h>
#define LINES 5
int main()
{
	for (int lineId = LINES; lineId >= 1; lineId -= 1)
	{
		for (int i = 1; i <= (LINES - lineId); i += 1)
		{
			printf(" ");
		}
		for (int j = 1; j <= lineId; j += 1)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
*/

/*Q6.8
#include <stdio.h>
int main()
{
	int age, total = 0;
	for (int i = 1; i <= 100; i += 1)
	{
		printf("Enter age : ");
		scanf("%d", &age);
		if (age >= 50 && age <= 60)
		{
			total += 1;
		}
	}
	printf("%d persons belong to the age group 50 to 60", total);
	return (0);
}
*/
