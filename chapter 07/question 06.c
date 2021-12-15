#include <stdio.h>
int main()
{
	int a[] = {13, 24, 39, 87, 102}, b[] = {17, 45, 97, 560};
	int aSize = sizeof(a) / sizeof(a[0]), bSize = sizeof(b) / sizeof(b[0]);
	int c[aSize + bSize], cId = 0, bUptoId = -1;
	for (int i = 0; i <= aSize - 1; i += 1)
	{
		for (int j = bUptoId + 1; j <= bSize - 1; j += 1)
		{
			if (b[j] <= a[i])
			{
				c[cId] = b[j];
				cId += 1;
				bUptoId = j;
			}
			else
			{
				break;
			}
		}
		c[cId] = a[i];
		cId += 1;
	}
	for (int k = bUptoId + 1; k <= bSize - 1; k += 1)
	{
		c[cId] = b[k];
		cId += 1;
	}
	printf("C={");
	for (int l = 0; l <= aSize + bSize - 1; l += 1)
	{
		printf("%d,", c[l]);
	}
	printf("}");
	return (0);
}