#include <stdio.h>
#include <math.h>
int main()
{
	int isbn[10], sum = 0;
	printf("Enter ISBN : ");
	for (int i = 0; i <= 9; i += 1)
	{
		scanf("%1d", &isbn[i]);
		if (i <= 8)
		{
			sum += isbn[i] * (i + 1);
		}
	}
	if (sum / 11 == isbn[9] && sum % 11 == 0)
	{
		printf("This is a valid ISBN");
	}
	else
	{
		printf("This is not a valid ISBN");
	}
}