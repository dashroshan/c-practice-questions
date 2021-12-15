#include <stdio.h>
int main()
{
	int negative = 0, positive = 0, num = 1;
	printf("Enter numbers separated by space (enter 0 and click enter to finish) : ");
	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break;
		}
		positive += (num > 0) ? 1 : 0;
		negative += (num > 0) ? 0 : 1;
		scanf("%*c");
	}
	printf("There are %d positive and %d negative numbers", positive, negative);
	return (0);
}