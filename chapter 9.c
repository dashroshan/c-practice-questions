/* Question : Case Study
#include <stdio.h>
double startPt, endPt, totalArea;
int numTraps;

void inputData(void);		//Updates the global variables with data from user
void findArea(void);		//Calculates and updates the totalArea global variable
double valueOfFn(double x); //Function whose area is to be found

int main()
{
	inputData();
	findArea();
	printf("Area = %lf", totalArea);
	return (0);
}

void inputData(void)
{
	printf("Enter lower limit : ");
	scanf("%lf", &startPt);
	printf("Enter upper limit : ");
	scanf("%lf", &endPt);
	printf("Enter total number of trapeziums to use : ");
	scanf("%d", &numTraps);
}

void findArea(void)
{
	double trapWidth = (endPt - startPt) / (double)numTraps;
	for (int i = 1; i <= numTraps; i += 1)
	{
		//Area of a trapezoid = 1/2 * (height 1 + height 2) * base width
		totalArea += 0.5 * (valueOfFn((i - 1) * trapWidth) + valueOfFn(i * trapWidth)) * trapWidth;
	}
}

double valueOfFn(double x)
{
	//The function whose area is to be found
	//Here y=x^2+1 function is used
	return (x * x + 1);
}
*/

/* Question : 9.1
#include <stdio.h>
void exchange(void);
int x = 1, y = 2;

int main()
{
	printf("Values before : %d %d\n", x, y);
	exchange();
	printf("Values after : %d %d\n", x, y);
	return (0);
}

void exchange(void)
{
	int temp = x;
	x = y;
	y = temp;
}
*/

/* Question : 9.2
#include <stdio.h>
void space(int x);

int main()
{
	int x;
	printf("Enter total positions to space : ");
	scanf("%d", &x);
	printf("1");
	space(x);
	printf("2");
	return (0);
}

void space(int x)
{
	for (int i = 1; i <= x; i += 1)
	{
		printf(" ");
	}
}
*/

/* Question : 9.3
#include <stdio.h>
double evaluateFn(double value, int termId, double xPower, int factorial, int multiplier);

double xVal;
int totalTerms;

int main()
{
	printf("Enter value of x : ");
	scanf("%lf", &xVal);
	printf("Enter total terms to calculate : ");
	scanf("%d", &totalTerms);
	printf("Answer = %lf", evaluateFn(xVal, 2, 1, 1, -1)); //The value of 1st term is entered directly here as this makes it easier to calculate the factorial and power by referencing 2 previous numbers
	return (0);
}

//value : The calculated total value until then
//termId : What term is going to be calculated
//xPower, factorial : Respective values until then
//multiplier : +1 or -1 which is to be multiplied to the term
double evaluateFn(double value, int termId, double xPower, int factorial, int multiplier)
{
	if (termId > totalTerms)
	{
		return (value);
	}
	else
	{
		xPower *= xVal * xVal;
		factorial *= (1 + (termId - 1) * 2) * ((termId - 1) * 2);
		return (evaluateFn(value + multiplier * xPower / (double)factorial, termId + 1, xPower, factorial, multiplier * (-1)));
	}
}
*/

/* Question : 9.4 : Cannot understand the expression given */

/* Question : 9.5
#include <stdio.h>
void printSeries(int n);
int main()
{
	int n;
	printf("Enter total terms of the Fibonacci series needed : ");
	scanf("%d", &n);
	printSeries(n);
	return (0);
}

void printSeries(int n)
{
	int nMinus1 = 1, nMinus2 = 1;
	printf("1 1 ");
	for (int i = 3; i <= n; i += 1)
	{
		nMinus2 = nMinus1;
		nMinus1 += nMinus2;
		printf("%d ", nMinus1);
	}
}
*/

/* Question : 9.6
#include <stdio.h>
#include <math.h>
double roundFn(double num, int roundTo);
int main()
{
	double num;
	int roundTo;
	printf("Enter number : ");
	scanf("%lf", &num);
	printf("Enter total decimal places to round off to : ");
	scanf("%d", &roundTo);
	printf("Rounded value : %.*lf", roundTo, roundFn(num, roundTo));
	return (0);
}

double roundFn(double num, int roundTo)
{
	//round function rounds off the number to the nearest integer
	//To convert for example 1.2345 to 2 decimal places, we can multiply it with 10^2, use the round function and divide by 10^2
	//1.2345 * 10^2 = 123.45
	//rounding it gives 123, 123*10^2=1.23 which is the required value
	return (round(num * pow(10, roundTo)) / pow(10, roundTo));
}
*/

/* Question : 9.7
#include <stdio.h>
int prime(int num);
int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d", &num);
	if (prime(num) == 1)
	{
		printf("Prime!");
	}
	else
	{
		printf("Not Prime!");
	}
	return (0);
}

int prime(int num)
{
	for (int i = 2; i < num; i += 1)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
*/

/* Question : 9.8
#include <stdio.h>
void toUpperCase(char string[], int length);
int main()
{
	char string[256];
	printf("Enter string : ");
	gets(string);
	toUpperCase(string, strlen(string));
	printf("%s", string);
	return (0);
}

void toUpperCase(char string[], int length)
{
	for (int i = 0; i < length; i += 1)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32; //a=97 and A=65, a-A=32, so to convert a to A we subtract 32
		}
	}
}
*/

/* Question : 9.9
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
*/

/* Question : 9.10
#include <stdio.h>
#include <math.h>

void readData(void);
void calculate(void);

double side1, side2, side3;
int areaOrPerimeter;

int main()
{
	readData();
	calculate();
	return (0);
}

void readData(void)
{
	printf("Enter length of the 3 sides separated by spaces : ");
	scanf("%lf %lf %lf", &side1, &side2, &side3);
	printf("Enter 1 for area or 2 for perimeter : ");
	scanf("%d", &areaOrPerimeter);
}

void calculate(void)
{
	double s = (side1 + side2 + side3) / 2, area, perimeter;
	if (areaOrPerimeter == 1)
	{
		area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
		printf("Area = %0.3lf", area);
	}
	else
	{
		perimeter = 2 * s;
		printf("Perimeter = %0.3lf", perimeter);
	}
}
*/

/* Question : 9.11
#include <stdio.h>
int m, n;
int largest(int matrix[m][n]);
int main()
{
	printf("Enter size of the matrix as mxn : ");
	scanf("%dx%d", &m, &n);
	printf("Enter matrix with elements of row separated by spaces :\n");
	int matrix[m][n];
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < n; j += 1)
		{
			scanf("%d%*c", &matrix[i][j]);
		}
	}
	printf("%d is the largest element in the given matrix!", largest(matrix));
	return (0);
}

int largest(int matrix[m][n])
{
	int large = -1000;
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < n; j += 1)
		{
			if (matrix[i][j] > large)
			{
				large = matrix[i][j];
			}
		}
	}
	return (large);
}
*/

/* Question : 9.12
#include <stdio.h>
int m, n;
void calculate(int matrixMN[m][n], int matrixNM[n][m]);
int main()
{
	printf("Enter size of the matrix as mxn : ");
	scanf("%dx%d", &m, &n);
	int matrixMN[m][n], matrixNM[n][m];
	printf("Enter the %dx%d matrix :\n", m, n);
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < n; j += 1)
		{
			scanf("%d%*c", &matrixMN[i][j]);
		}
	}
	printf("Enter the %dx%d matrix :\n", n, m);
	for (int i = 0; i < n; i += 1)
	{
		for (int j = 0; j < m; j += 1)
		{
			scanf("%d%*c", &matrixNM[i][j]);
		}
	}
	calculate(matrixMN, matrixNM);
	return (0);
}

void calculate(int matrixMN[m][n], int matrixNM[n][m])
{
	int value;
	printf("Product of the 2 given matrices : \n");
	for (int i = 0; i < m; i += 1)
	{
		for (int j = 0; j < m; j += 1)
		{
			value = 0;
			for (int k = 0; k < n; k += 1)
			{
				value += matrixMN[i][k] * matrixNM[k][j];
			}
			printf("%d ", value);
		}
		printf("\n");
	}
}
*/

/* Question : 9.13 : Cannot understand how to display the averages in the matrix */

/* Question : 9.14
#include <stdio.h>
#define MAXSIZE 50

int array1[MAXSIZE], array1Size = 0, array2[MAXSIZE], array2Size = 0, arrayMerged[MAXSIZE], arrayMergedSize = 0;
void readArrays(void);
void sortArray(int array[], int size);
void mergeArrays(void);
void printMergedArray(void);

int main()
{
	readArrays();
	sortArray(array1, array1Size);
	sortArray(array2, array2Size);
	mergeArrays();
	printMergedArray();
	return (0);
}

void readArrays(void)
{
	char spaceOrNewline;
	printf("Enter the first integer array with elements separated by spaces : ");
	for (int i = 0; spaceOrNewline != '\n'; i += 1)
	{
		scanf("%d%c", &array1[i], &spaceOrNewline);
		array1Size += 1;
	}
	spaceOrNewline = ' ';
	printf("Enter the second integer array with elements separated by spaces : ");
	for (int i = 0; spaceOrNewline != '\n'; i += 1)
	{
		scanf("%d%c", &array2[i], &spaceOrNewline);
		array2Size += 1;
	}
}

void sortArray(int array[], int size)
{
	int temp;
	for (int i = 1; i < size; i += 1)
	{
		for (int j = 1; j < size; j += 1)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
}

void mergeArrays(void)
{
	int array2MergedUpto = -1;
	for (int i = 0; i < array1Size; i += 1)
	{
		for (int j = array2MergedUpto + 1; array2[j] <= array1[i]; j += 1)
		{
			arrayMerged[arrayMergedSize] = array2[j];
			arrayMergedSize += 1;
			array2MergedUpto = j;
		}
		arrayMerged[arrayMergedSize] = array1[i];
		arrayMergedSize += 1;
	}
	for (int k = array2MergedUpto + 1; k < array2Size; k += 1)
	{
		arrayMerged[arrayMergedSize] = array2[k];
		arrayMergedSize += 1;
	}
}

void printMergedArray(void)
{
	printf("Merged array : ");
	for (int i = 0; i < arrayMergedSize; i += 1)
	{
		printf("%d ", arrayMerged[i]);
	}
}
*/

/* Question : 9.5
#include <stdio.h>

void copyString(char toBeCopiedHere[], char toBeCopied[]);
int compareString(char string1[], char string2[]);
void addString(char toBeAddedHere[], char toBeAdded[]);

int main()
{
	char string[100];
	copyString(string, "This is the copied string!");
	printf("%s\n", string);
	printf("Result of comparing 2 equal strings : %d\n", compareString("test", "test"));
	printf("Result of comparing 2 unequal strings : %d\n", compareString("test", "taste"));
	addString(string, " This is added later!");
	printf("%s", string);
	return (0);
}

void copyString(char toBeCopiedHere[], char toBeCopied[])
{
	int length = 0;
	for (int i = 0; toBeCopied[i] != '\0'; i += 1)
	{
		toBeCopiedHere[i] = toBeCopied[i];
		length += 1;
	}
	toBeCopiedHere[length] = '\0';
}

int compareString(char string1[], char string2[])
{
	int difference = 0;
	for (int i = 0; string1[i] != '\0' && string2[i] != '\0'; i += 1)
	{
		difference += string1[i] - string2[i];
	}
	return (difference);
}

void addString(char toBeAddedHere[], char toBeAdded[])
{
	int oldLength = 0, newLength;
	for (int i = 0; toBeAddedHere[i] != '\0'; i += 1)
	{
		oldLength += 1;
	}
	newLength = oldLength;
	for (int j = oldLength; toBeAdded[j - oldLength] != '\0'; j += 1)
	{
		toBeAddedHere[j] = toBeAdded[j - oldLength];
		newLength += 1;
	}
	toBeAddedHere[newLength] = '\0';
}
*/

/* Question : 9.16
#include <stdio.h>
int find(char string[], char toFind);
int main()
{
	printf("%d", find("This is the string to find the character in!", 'y'));
	return (0);
}

int find(char string[], char toFind)
{
	for (int i = 0; string[i] != '\0'; i += 1)
	{
		if (string[i] == toFind)
		{
			return (1);
		}
	}
	return (0);
}
*/

/* Question : 9.17
#include <stdio.h>
void locate(char toBeInsertedHere[], char toBeInserted[], int index);
int main()
{
	char string[50] = "The text is here!";
	locate(string, "inserted ", 8);
	printf("%s", string);
	return (0);
}

void locate(char toBeInsertedHere[], char toBeInserted[], int index)
{
	char temp[50];
	int indexAfterAdding = index + 1, lengthAfterIndex = 0;
	for (int i = index + 1; toBeInsertedHere[i] != '\0'; i += 1)
	{
		temp[i - index - 1] = toBeInsertedHere[i];
		lengthAfterIndex += 1;
	}
	for (int j = 0; toBeInserted[j] != '\0'; j += 1)
	{
		toBeInsertedHere[index + j + 1] = toBeInserted[j];
		indexAfterAdding += 1;
	}
	for (int k = indexAfterAdding; k < indexAfterAdding + lengthAfterIndex; k += 1)
	{
		toBeInsertedHere[k] = temp[k - indexAfterAdding];
	}
	toBeInsertedHere[indexAfterAdding + lengthAfterIndex] = '\0';
}
*/

/* Question : 9.18
#include <stdio.h>
#include <string.h>
void toMonth(char monthName[], int monthNumber);
int main()
{
	char monthName[20];
	int monthNumber;
	printf("Enter month number : ");
	scanf("%d", &monthNumber);
	toMonth(monthName, monthNumber);
	printf("The month is %s!", monthName);
	return (0);
}

void toMonth(char monthName[], int monthNumber)
{
	switch (monthNumber)
	{
	case 1:
		strcpy(monthName, "January");
		break;

	case 2:
		strcpy(monthName, "February");
		break;

	case 3:
		strcpy(monthName, "March");
		break;

	case 4:
		strcpy(monthName, "April");
		break;

	case 5:
		strcpy(monthName, "May");
		break;

	case 6:
		strcpy(monthName, "June");
		break;

	case 7:
		strcpy(monthName, "July");
		break;

	case 8:
		strcpy(monthName, "August");
		break;

	case 9:
		strcpy(monthName, "September");
		break;

	case 10:
		strcpy(monthName, "October");
		break;

	case 11:
		strcpy(monthName, "November");
		break;

	case 12:
		strcpy(monthName, "December");
		break;
	}
}
*/

/* Question : 9.19
#include <stdio.h>
void leap(int year);
int main()
{
	int year;
	printf("Enter year : ");
	scanf("%d", &year);
	leap(year);
	return (0);
}

void leap(int year)
{
	if (year % 4 == 0)
	{
		printf("Its a leap year!");
	}
	else
	{
		printf("Its not a leap year!");
	}
}
*/

/* Question : 9.20
#include <stdio.h>
#include <math.h>
double roundNum(double num);
int main()
{
	double num;
	printf("Enter number : ");
	scanf("%lf", &num);
	printf("Rounded value : %0.2lf", roundNum(num));
	return (0);
}

double roundNum(double num)
{
	return (round(num * 100) / 100);
}
*/