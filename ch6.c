/* Question : 6.1
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

/* Question : 6.2
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

/* Question : 6.3
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

/* Question : 6.4
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

/* Question : 6.5
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

/* Question : 6.6
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

/* Question : 6.7a
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

/* Question : 6.7b
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

/* Question : 6.8
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

/* Question : 6.9
#include <stdio.h>
#include <math.h>
int main()
{
	int y1, y2;
	printf("0---y--->\n");
	printf("|\nx\n|\n");
	for (double x = 0.0; x < 4.05; x += 0.1)
	{
		y1 = (int)(50 * exp(-0.4 * x));
		y2 = (int)(50 * exp(-0.4 * x * x / 2));
		for (int y = 0; y <= 50; y += 1)
		{
			if (y1 == y2 && y == y1)
			{
				printf("#");
			}
			else if (y == y1)
			{
				printf("0");
			}
			else if (y == y2)
			{
				printf("*");
			}
			else if ((y > y1 && y < y2) || (y > y2 && y < y1))
			{
				printf("-");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return (0);
}
*/

/* Question : 6.10
#include <stdio.h>
#include <math.h>
int main()
{
	printf("x  ");
	for (double i = 0.1; i < 0.99; i += 0.1)
	{
		printf("%6.1lf", i);
	}
	for (int j = 0; j <= 9; j += 1)
	{
		printf("\n%0.1lf", (double)j);
		for (int k = 1; k <= 9; k += 1)
		{
			printf("%6.1lf", exp(-(j + (double)k / 10.0)));
		}
	}
	return (0);
}
*/

/* Question : 6.11
#include <stdio.h>
int main()
{
	int num, binary[50], arraySize = 0;
	printf("Enter number : ");
	scanf("%d", &num);
	while (num >= 2)
	{
		binary[arraySize] = num % 2;
		num /= 2;
		arraySize += 1;
	}
	binary[arraySize] = num;
	printf("Binary form : ");
	for (int id = arraySize; id >= 0; id -= 1)
	{
		printf("%d", binary[id]);
	}
	return (0);
}
*/

/* Question : 6.12 The pattern doesn't make any sense*/

/* Question : 6.13
#include <stdio.h>
int main()
{
	double eSum = 0, eSumTemp = 1, factorial = 1.0;
	for (int i = 1; 0 == 0; i += 1)
	{
		factorial *= (double)i;
		eSumTemp += 1.0 / factorial;
		if (eSumTemp - eSum >= 0.00001)
		{
			eSum = eSumTemp;
		}
		else
		{
			break;
		}
	}
	printf("e=%lf", eSum);
	return (0);
}
*/

/* Question : 6.14a
#include <stdio.h>
#include <math.h>
int main()
{
	double x, tempSin, sin, diff, factorial = 1.0;
	int plusMinus = 1;
	printf("Enter radian value : ");
	scanf("%lf", &x);
	tempSin = x;
	sin = x;
	for (int i = 3; 0 == 0; i += 2)
	{
		plusMinus = (plusMinus == 1) ? -1 : 1;
		factorial *= (i - 1) * i;
		tempSin += plusMinus * (pow(x, i) / factorial);
		diff = tempSin - sin;
		diff = (diff > 0) ? diff : -diff;
		if (diff < 0.00001)
		{
			sin = tempSin;
			break;
		}
		else
		{
			sin = tempSin;
		}
	}
	printf("sin(%0.5lf)=%0.5lf", x, sin);
	return (0);
}
*/

/* Question : 6.14b
#include <stdio.h>
int main()
{
	double x, tempCos = 1, cos = 1, diff, factorial = 1.0;
	int plusMinus = 1;
	printf("Enter radian value : ");
	scanf("%lf", &x);
	for (int i = 2; 0 == 0; i += 2)
	{
		plusMinus = (plusMinus == 1) ? -1 : 1;
		factorial *= (i - 1) * i;
		tempCos += plusMinus * (pow(x, i) / factorial);
		diff = tempCos - cos;
		diff = (diff > 0) ? diff : -diff;
		if (diff < 0.00001)
		{
			cos = tempCos;
			break;
		}
		else
		{
			cos = tempCos;
		}
	}
	printf("cos(%0.5lf)=%0.5lf", x, cos);
	return (0);
}
*/

/* Question : 6.14c
#include <stdio.h>
#include <math.h>
int main()
{
	double tempSum=0, sum;
	for(int i=1;0==0;i+=1)
	{
		tempSum+=pow(1.0/(double)i,i);
		if (tempSum-sum<0.00001)
		{
			break;
		}
		else
		{
			sum=tempSum;
		}
	}
	printf("Sum=%0.5lf",sum);
	return (0);
}
*/

/* Question : 6.15
#include <stdio.h>
#include <math.h>
int main()
{
	double c, d, p, n;
	printf("Enter original cost : ");
	scanf("%lf", &c);
	printf("Enter depreciation rate : ");
	scanf("%lf", &d);
	printf("Enter scrap value : ");
	scanf("%lf", &p);
	n = log(p / c) / log(1 - d);
	printf("The useful life is %0.2lf years", n);
	return (0);
}
*/

/* Question : 6.16a
#include <stdio.h>
#define SIZE 5
int main()
{
	for (int y = 1; y <= SIZE; y += 1)
	{
		for (int x = 1; x <= SIZE; x += 1)
		{
			printf("S ");
		}
		printf("\n");
	}
	return (0);
}
*/

/* Question : 6.16b
#include <stdio.h>
#define SIZE 5
int main()
{
	for (int y = 1; y <= SIZE; y += 1)
	{
		for (int x = 1; x <= SIZE; x += 1)
		{
			if (x == 1 || x == SIZE || y == 1 || y == SIZE)
			{
				printf("S ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return (0);
}
*/

/* Question : 6.17
#include <stdio.h>
#include <math.h>
int main()
{
	double radian;
	printf("__________________________________+Y\n");
	for (int degree = 0; degree <= 180; degree += 15)
	{
		printf("|");
		for (int yVal = 1; yVal <= 30; yVal += 1)
		{
			if (yVal == (int)(30 * sin(3.1416 / 180.0 * (double)degree)))
			{
				printf("0");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("+X");
	return (0);
}
*/

/* Question : 6.18
#include <stdio.h>
int main()
{
	int total = 0;
	for (int i = 1; i <= 100; i += 1)
	{
		if (!(i % 2 == 0 || i % 3 == 0))
		{
			printf("%d ", i);
			total += 1;
		}
	}
	printf("\nTotal=%d", total);
	return (0);
}
*/

/* Question : 6.19
#include <stdio.h>
int main()
{
	for (int y = 1; y <= 5; y += 1)
	{
		for (int x = 1; x <= 5; x += 1)
		{
			if (x == 3 && y == 3)
			{
				printf("O ");
			}
			else
			{
				printf("S ");
			}
		}
		printf("\n");
	}
	return (0);
}
*/

/* Question : 6.20
#include <stdio.h>
int main()
{
	int nums[10] = {10, 20, 30, 40, 50, -10, -20, -30, 60, -70}, sum = 0, total = 0;
	for (int i = 0; i <= 9; i += 1)
	{
		if (nums[i] > 0)
		{
			total += 1;
			sum += nums[i];
		}
	}
	printf("There were %d positive integers whose sum was %d", total, sum);
	return (0);
}
*/
