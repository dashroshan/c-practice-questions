#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the 3 sides separated by spaces : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
	{
		printf("This is a right-angled triangle!");
	}
	return (0);
}