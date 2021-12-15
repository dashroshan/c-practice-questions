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