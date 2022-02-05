#include <stdio.h>
int main()
{
	int count[5] = {0}, totalBallots, spoilt = 0, candidate;
	printf("Enter number of total ballots : ");
	scanf("%d", &totalBallots);
	for (int i = 0; i <= totalBallots - 1; i += 1)
	{
		printf("Enter candidate number of ballot %d : ", i + 1);
		scanf("%d", &candidate);
		if (candidate >= 1 && candidate <= 5)
		{
			count[candidate - 1] += 1;
		}
		else
		{
			spoilt += 1;
		}
	}
	printf("Spoilt ballots=%d\nTotal votes for:\nCandidate 1=%d\nCandidate 2=%d\nCandidate 3=%d\nCandidate 4=%d\nCandidate 5=%d\n", spoilt, count[0], count[1], count[2], count[3], count[4]);
	return (0);
}