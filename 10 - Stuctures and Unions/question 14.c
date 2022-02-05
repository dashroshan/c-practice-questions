#include <stdio.h>
#define MAXCHARS 20
#define TOTALPLAYERS 50

struct cricket
{
	char player[MAXCHARS];
	char team[MAXCHARS];
	double battingAvg;
};

void readData(struct cricket inputData[TOTALPLAYERS]);
void processData(struct cricket inputData[TOTALPLAYERS]);

int main()
{
	struct cricket cricketData[TOTALPLAYERS];
	readData(cricketData);
	processData(cricketData);
	return (0);
}

void readData(struct cricket inputData[TOTALPLAYERS])
{
	for (int i = 0; i < TOTALPLAYERS; i += 1)
	{
		printf("%d. Enter player, team, and batting avg separated by spaces : ", i + 1);
		fflush(stdin);
		scanf("%s %s %lf", &inputData[i].player, &inputData[i].team, &inputData[i].battingAvg);
	}
}

void processData(struct cricket inputData[TOTALPLAYERS])
{
	char team[MAXCHARS];
	for (int i = 0; i < TOTALPLAYERS; i += 1)
	{
		if (strcmp(inputData[i].team, " ") != 0)
		{
			strcpy(team, inputData[i].team);
			printf("\nTeam : %s\n", team);
			for (int j = 0; j < TOTALPLAYERS; j += 1)
			{
				if (strcmp(team, inputData[j].team) == 0)
				{
					printf("%-20s%0.2lf\n", inputData[j].player, inputData[j].battingAvg);
					strcpy(inputData[j].team, " ");
				}
			}
		}
	}
}