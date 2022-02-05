#include <stdio.h>
#define INCHTOCM 2.54
#define CMTOINCH 0.394

struct metric
{
	int metre;
	int centimetre;
};

struct british
{
	int feet;
	int inch;
};

struct metric readMetric(void);
struct british readBritish(void);
void addAndConvert(struct metric metricData, struct british britishData);

int main()
{
	struct metric metricData = readMetric();
	struct british britishData = readBritish();
	addAndConvert(metricData, britishData);
	return (0);
}

struct metric readMetric(void)
{
	struct metric inputMetric;
	printf("Enter distance in metric unit as : Xm Ycm : ");
	scanf("%dm %dcm", &inputMetric.metre, &inputMetric.centimetre);
	inputMetric.metre += inputMetric.centimetre / 100;
	inputMetric.centimetre %= 100;
	return (inputMetric);
}

struct british readBritish(void)
{
	struct british inputBritish;
	printf("Enter distance in british unit as : Xft Yin : ");
	scanf("%dft %din", &inputBritish.feet, &inputBritish.inch);
	inputBritish.feet += inputBritish.inch / 12;
	inputBritish.inch %= 12;
	return (inputBritish);
}

void addAndConvert(struct metric metricData, struct british britishData)
{
	int convertTo;
	metricData.centimetre += metricData.metre * 100;
	britishData.inch += britishData.feet * 12;
	printf("For sum in metric units, enter 1. For sum in british units, enter 2 : ");
	scanf("%d", &convertTo);
	if (convertTo == 1)
	{
		printf("Sum = %dm and %dcm", (metricData.centimetre + (int)(britishData.inch * INCHTOCM)) / 100, (int)(metricData.centimetre + (int)(britishData.inch * INCHTOCM)) % 100);
	}
	else
	{
		printf("Sum = %dft and %din", (britishData.inch + (int)(metricData.centimetre * CMTOINCH)) / 12, (int)(britishData.inch + (int)(metricData.centimetre * CMTOINCH)) % 12);
	}
}