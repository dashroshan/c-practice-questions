#include <stdio.h>
int main()
{
	double maths, phy, chem;
	printf("Enter the marks of the candidate below...\n");
	printf("Mathematics : ");
	scanf("%lf", &maths);
	printf("Physics : ");
	scanf("%lf", &phy);
	printf("Chemistry : ");
	scanf("%lf", &chem);
	if (maths + phy >= 150 || (maths >= 60 && phy >= 50 && chem >= 40 && maths + phy + chem >= 200))
	{
		printf("The candidate is eligible!\n");
	}
	else
	{
		printf("The candidate is not eligible!\n");
	}
}