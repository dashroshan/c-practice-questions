#include <stdio.h>
#define MAXSIZE 100

struct vector
{
	int size;
	int element[MAXSIZE];
};

struct vector createVector(void);
struct vector modifyVector(struct vector vectorToModify, int nThElement, int newValue);
struct vector multiplyByScalar(struct vector vectorData, int scalarToMultiply);
void displayVector(struct vector vectorToDisplay);

int main()
{
	struct vector sampleVector = createVector();
	sampleVector = modifyVector(sampleVector, 2, 50);
	sampleVector = multiplyByScalar(sampleVector, 2);
	displayVector(sampleVector);
	return (0);
}

struct vector createVector(void)
{
	char temp;
	struct vector inputVector;
	inputVector.size = 0;
	printf("Enter the elements of the vector separated by spaces : ");
	for (int i = 0; temp != '\n'; i += 1)
	{
		scanf("%d%c", &inputVector.element[i], &temp);
		inputVector.size += 1;
	}
	return (inputVector);
}

struct vector modifyVector(struct vector vectorToModify, int nThElement, int newValue)
{
	vectorToModify.element[nThElement - 1] = newValue;
	return (vectorToModify);
}

struct vector multiplyByScalar(struct vector vectorData, int scalarToMultiply)
{
	for (int i = 0; i < vectorData.size; i += 1)
	{
		vectorData.element[i] *= scalarToMultiply;
	}
	return (vectorData);
}

void displayVector(struct vector vectorToDisplay)
{
	printf("(");
	for (int i = 0; i < vectorToDisplay.size; i += 1)
	{
		printf("%d", vectorToDisplay.element[i]);
		if (i != vectorToDisplay.size - 1)
		{
			printf(",");
		}
	}
	printf(")");
}