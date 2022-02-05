#include <stdio.h>
#define MIN2(a, b) (((a) < (b)) ? (a) : (b))
#define MINIMUM(a, b, c) (MIN2((MIN2((a), (b))), (c)))
int main()
{
	printf("%d", MINIMUM(3, 1, 2));
	return (0);
}