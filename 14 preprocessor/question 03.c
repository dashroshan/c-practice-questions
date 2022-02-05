#include <stdio.h>
#define VOLUME(r) ((4.0 / 3.0) * (3.14159) * (r) * (r) * (r))
int main()
{
	printf("Volume of sphere with radius 05 = %0.3lf\n", VOLUME(5));
	printf("Volume of sphere with radius 10 = %0.3lf\n", VOLUME(10));
	printf("Volume of sphere with radius 15 = %0.3lf\n", VOLUME(15));
	return (0);
}