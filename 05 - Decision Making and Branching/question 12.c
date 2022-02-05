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