#include <stdio.h>

void readData(void);
void calculate(void);
void add(void);
void subtract(void);
void multiply(void);
void divide(void);
void showResult(void);

double num1, num2, result;
char operation;

int main()
{
	readData();
	calculate();
	showResult();
	return (0);
}

void readData(void)
{
	printf("Enter the expression : ");
	scanf("%lf%c%lf", &num1, &operation, &num2);
}

void calculate(void)
{
	switch (operation)
	{
	case '+':
		add();
		break;
	case '-':
		subtract();
		break;
	case 'x':
	case '*':
		multiply();
		break;
	case '/':
		divide();
		break;
	}
}

void add(void)
{
	result = num1 + num2;
}

void subtract(void)
{
	result = num1 - num2;
}

void multiply(void)
{
	result = num1 * num2;
}

void divide(void)
{
	result = num1 / num2;
}

void showResult(void)
{
	printf("Answer = %lf", result);
}