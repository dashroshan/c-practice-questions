/* Question : 5.1a
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("NUMBER IS EVEN");
	}
	if (num % 2 != 0)
	{
		printf("NUMBER IS ODD");
	}
	return (0);
}
*/

/* Question : 5.1b
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("NUMBER IS EVEN");
	}
	else
	{
		printf("NUMBER IS ODD");
	}
	return (0);
}
*/

/* Question : 5.2
#include <stdio.h>
int main()
{
	int numOfInt = 0, sumOfInt = 0;
	for (int i = 100; i <= 200; i += 1)
	{
		if (i % 7 == 0)
		{
			numOfInt += 1;
			sumOfInt += i;
		}
	}
	printf("There are %d integers between 100 and 200 that are divisible by 7. Sum of those integers is %d.\n", numOfInt, sumOfInt);
	return (0);
}
*/

/* Question : 5.3
#include <stdio.h>
int main()
{
	int a, b, c, d, m, n;
	double x1, x2;
	printf("Enter the 1st eqn as ax+by=c : ");
	scanf("%dx+%dy=%d", &a, &b, &m);
	printf("Enter the 2nd eqn as ax+by=c : ");
	scanf("%dx+%dy=%d", &c, &d, &n);
	if ((a * d - c * b) == 0)
	{
		printf("No unique solution!\n");
	}
	else
	{
		x1 = (double)(m * d - b * n) / (double)(a * d - c * b);
		x2 = (double)(n * a - m * c) / (double)(a * d - c * b);
		printf("x1=%0.3lf\nx2=%0.3lf\n", x1, x2);
	}
	return (0);
}
*/

/* Question : 5.4
#include <stdio.h>
int main()
{
	int marks[5] = {20, 42, 68, 93, 65}, totalMarks = 5;
	int m0to40 = 0, m41to60 = 0, m61to80 = 0, m81to100 = 0;
	for (int i = 0; i <= totalMarks + 1; i += 1)
	{
		if (marks[i] >= 0 && marks[i] <= 40)
		{
			m0to40 += 1;
		}
		else if (marks[i] >= 41 && marks[i] <= 60)
		{
			m41to60 += 1;
		}
		else if (marks[i] >= 61 && marks[i] <= 80)
		{
			m61to80 += 1;
		}
		else if (marks[i] >= 81 && marks[i] <= 100)
		{
			m81to100 += 1;
		}
	}
	printf("(a) %d\n(b) %d\n(c) %d\n(d) %d\n(e) %d\n(f) %d\n(g) %d\n(h) %d\n", m81to100, m61to80 + m81to100, m41to60 + m61to80 + m81to100, m0to40, m81to100, m61to80, m41to60, m0to40);
	return (0);
}
*/

/* Question : 5.5
#include <stdio.h>
int main()
{
	double maths, phy, chem;
	printf("Enter the marks of the candidate below...\n");
	printf("Mathematics : ");
	scanf("%lf", &maths);
	printf("Physics : ");
	scanf("%lf", &phy);
	printf("Chemistry : ");
	scanf("%lf", &chem);
	if (maths + phy >= 150 || (maths >= 60 && phy >= 50 && chem >= 40 && maths + phy + chem >= 200))
	{
		printf("The candidate is eligible!\n");
	}
	else
	{
		printf("The candidate is not eligible!\n");
	}
}
*/

/* Question : 5.6
#include <stdio.h>
#include <math.h>
int main()
{
	printf("Number%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f%7.1f\n\n", 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9);
	for (int i = 0; i <= 9; i += 1)
	{
		printf("%-6.1lf", (double)i);
		for (int j = 0; j <= 9; j += 1)
		{
			printf("%7.3lf", sqrt((double)i + ((double)j / 10)));
		}
		printf("\n");
	}
	return (0);
}
*/

/* Question : 5.7a
#include <stdio.h>
int main()
{
	int lineId = 1, num = 1;
	while (0 == 0)
	{
		for (int i = 1; i <= lineId; i += 1)
		{
			printf("%d ", num);
			num += 1;
			if (num > 91)
			{
				return (0);
			}
		}
		printf("\n");
		lineId += 1;
	}
	return (0);
}
*/

/* Question : 5.7b
#include <stdio.h>
#define TOTALLINES 15
int main()
{
	int lineId = 1, num, previousLine = 0;
	while (0 == 0)
	{
		num = (previousLine == 0) ? 1 : 0;
		previousLine = num;
		for (int i = 1; i <= lineId; i += 1)
		{
			printf("%d ", num);
			num = (num == 0) ? 1 : 0;
		}
		printf("\n");
		if (lineId == TOTALLINES)
		{
			return (0);
		}
		lineId += 1;
	}
	return (0);
}
*/

/* Question : 5.8
#include <stdio.h>
int main()
{
	int itemType;
	double totalCost;
	printf("Enter total amount : ");
	scanf("%lf", &totalCost);
	printf("Enter 1 for mill cloth and 2 for handloom items : ");
	scanf("%d", &itemType);
	if (itemType != 1 && itemType != 2)
	{
		printf("Not a valid input!\n");
	}
	switch ((int)totalCost)
	{
	case 0 ... 100:
		totalCost *= (itemType == 1) ? 1 : 0.95;
		break;
	case 101 ... 200:
		totalCost *= (itemType == 1) ? 0.95 : 0.925;
		break;
	case 201 ... 300:
		totalCost *= (itemType == 1) ? 0.925 : 0.9;
		break;
	default:
		totalCost *= (itemType == 1) ? 0.9 : 0.85;
		break;
	}
	printf("The discounted cost is %0.2lf", totalCost);
	return (0);
}
*/

/* Question : 5.9 has an error in it*/

/* Question : 5.10
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d;
	printf("Enter the eqn as ax2+bx+c : ");
	scanf("%lfx2+%lfx+%lf", &a, &b, &c);
	if (a == 0 && b == 0)
	{
		printf("No solution!");
	}
	else if (a == 0)
	{
		printf("There is only one root which is : %0.3lf", -c / b);
	}
	else
	{
		d = b * b - 4 * a * c;
		if (d < 0)
		{
			printf("No real roots!");
		}
		else
		{
			d = sqrt(d);
			printf("The roots are %0.3lf and %0.3lf", (-b + d) / (2 * a), (-b - d) / (2 * a));
		}
	}
	return (0);
}
*/

/* Question : 5.11
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the 3 sides separated by spaces : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
	{
		printf("This is a right-angled triangle!");
	}
	return (0);
}
*/

/* Question : 5.12
#include <stdio.h>
int main()
{
	int units, charge;
	printf("Enter units consumed : ");
	scanf("%d", &units);
	if (units <= 200)
	{
		charge = units * 80;
	}
	else
	{
		if (units <= 300)
		{
			charge = (units - 200) * 90 + 16000;
		}
		else
		{
			charge = (units - 300) * 100 + 25000;
			if (units > 400)
			{
				charge *= 1.15;
			}
		}
	}
	printf("Charge : %0.2lfrs", (double)charge / 100);
	return (0);
}
*/

/* Question : 5.13
#include <stdio.h>
int main()
{
	int totalNum = 0, sum = 0;
	for (int i = 0; i <= 100; i += 1)
	{
		if (i % 6 == 0 && i % 4 != 0)
		{
			totalNum += 1;
			sum += i;
		}
	}
	printf("There are %d such numbers and their sum is %d", totalNum, sum);
	return (0);
}
*/

/* Question : 5.14a
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a positive integer : ");
	scanf("%d", &num);
	for (int i = 2; i < num; i += 1)
	{
		if (num % i == 0)
		{
			printf("%d is not a prime number!", num);
			goto lastline;
		}
	}
	printf("%d is a prime number!", num);
lastline:
	return (0);
}
*/

/* Question : 5.14b
#include <stdio.h>
int main()
{
	int lowerRange = 100, upperRange = 200;
	int totalPrime = 0, isPrime = 0;
	for (int num = lowerRange; num <= upperRange; num += 1)
	{
		isPrime = 1;
		for (int i = 2; i < num; i += 1)
		{
			if (num % i == 0)
			{
				isPrime = 0;
				break;
			}
		}
		totalPrime += (isPrime == 1) ? 1 : 0;
	}
	printf("There are %d prime numbers between %d and %d!", totalPrime, lowerRange, upperRange);
	return (0);
}
*/

/* Question : 5.15
#include <stdio.h>
#include <math.h>
int main()
{
	char T;
	double x;
	printf("Enter s for sin, c for cos, or t for tan : ");
	T = getchar();
	printf("Enter angle in radian : ");
	scanf("%lf", &x);
	switch (T)
	{
	case 's':
	case 'S':
		printf("sin(%0.3lf)=%0.3lf", x, sin(x));
		break;
	case 'c':
	case 'C':
		printf("cos(%0.3lf)=%0.3lf", x, cos(x));
		break;
	case 't':
	case 'T':
		printf("tan(%0.3lf)=%0.3lf", x, tan(x));
		break;
	}
	return (0);
}
*/