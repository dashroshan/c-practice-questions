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