#include <stdio.h>
int main()
{
	int marks[5] = {20, 42, 68, 93, 65}, totalMarks = 5;
	int m0to40 = 0, m41to60 = 0, m61to80 = 0, m81to100 = 0;
	for (int i = 0; i <= totalMarks + 1; i += 1)
	{
		if (marks[i] >= 0 && marks[i] <= 40)
		{
			m0to40 += 1;
		}
		else if (marks[i] >= 41 && marks[i] <= 60)
		{
			m41to60 += 1;
		}
		else if (marks[i] >= 61 && marks[i] <= 80)
		{
			m61to80 += 1;
		}
		else if (marks[i] >= 81 && marks[i] <= 100)
		{
			m81to100 += 1;
		}
	}
	printf("(a) %d\n(b) %d\n(c) %d\n(d) %d\n(e) %d\n(f) %d\n(g) %d\n(h) %d\n", m81to100, m61to80 + m81to100, m41to60 + m61to80 + m81to100, m0to40, m81to100, m61to80, m41to60, m0to40);
	return (0);
}