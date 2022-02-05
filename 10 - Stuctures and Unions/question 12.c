#include <stdio.h>
#define CITYNAMEMAXSIZE 15
#define TOTALCITIES 3

struct census
{
	char city[CITYNAMEMAXSIZE];
	long int population;
	float literacy;
};

void readCityData(struct census cityData[TOTALCITIES]);
void sortByCity(struct census cityData[TOTALCITIES]);
void sortByLiteracy(struct census cityData[TOTALCITIES]);
void sortByPopulation(struct census cityData[TOTALCITIES]);

int main()
{
	struct census cityData[TOTALCITIES];
	readCityData(cityData);
	printf("\n[A] Data sorted by the city name alphabetically :\n\n");
	sortByCity(cityData);
	printCityData(cityData);
	printf("\n[B] Data sorted by the literacy level :\n\n");
	sortByLiteracy(cityData);
	printCityData(cityData);
	printf("\n[C] Data sorted by the population :\n\n");
	sortByPopulation(cityData);
	printCityData(cityData);
	return (0);
}

void readCityData(struct census cityData[TOTALCITIES])
{
	for (int i = 0; i < TOTALCITIES; i += 1)
	{
		printf("%d. Enter city name, population, and literacy separated by spaces : ", i + 1);
		fflush(stdin);
		scanf("%s %ld %f", &cityData[i].city, &cityData[i].population, &cityData[i].literacy);
	}
}

void printCityData(struct census cityData[TOTALCITIES])
{
	printf("%-15s%15s%15s\n", "City Name", "Population", "Literacy");
	for (int i = 0; i < TOTALCITIES; i += 1)
	{
		printf("%-15s%15d%15.2f\n", cityData[i].city, cityData[i].population, cityData[i].literacy);
	}
}

void sortByCity(struct census cityData[TOTALCITIES])
{
	struct census temp;
	for (int i = 1; i < TOTALCITIES; i += 1)
	{
		for (int j = 1; j < TOTALCITIES; j += 1)
		{
			if (strcmp(cityData[j].city, cityData[j - 1].city) < 0)
			{
				temp = cityData[j];
				cityData[j] = cityData[j - 1];
				cityData[j - 1] = temp;
			}
		}
	}
}

void sortByLiteracy(struct census cityData[TOTALCITIES])
{
	struct census temp;
	for (int i = 1; i < TOTALCITIES; i += 1)
	{
		for (int j = 1; j < TOTALCITIES; j += 1)
		{
			if (cityData[j].literacy < cityData[j - 1].literacy)
			{
				temp = cityData[j];
				cityData[j] = cityData[j - 1];
				cityData[j - 1] = temp;
			}
		}
	}
}

void sortByPopulation(struct census cityData[TOTALCITIES])
{
	struct census temp;
	for (int i = 1; i < TOTALCITIES; i += 1)
	{
		for (int j = 1; j < TOTALCITIES; j += 1)
		{
			if (cityData[j].population < cityData[j - 1].population)
			{
				temp = cityData[j];
				cityData[j] = cityData[j - 1];
				cityData[j - 1] = temp;
			}
		}
	}
}