#include <stdio.h>
int main()
{
	int age, total = 0;
	for (int i = 1; i <= 100; i += 1)
	{
		printf("Enter age : ");
		scanf("%d", &age);
		if (age >= 50 && age <= 60)
		{
			total += 1;
		}
	}
	printf("%d persons belong to the age group 50 to 60", total);
	return (0);
}