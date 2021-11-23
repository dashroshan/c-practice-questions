#include <stdio.h>
#define MAXCHARS 50
#define TOTALHOTELS 5

struct hotel
{
	char name[MAXCHARS];
	char address[MAXCHARS];
	char grade;
	double avgRoomCharge;
	int totalRooms;
};

void printByCharge(struct hotel hotelData[TOTALHOTELS], char grade);
void printLessThanCharge(struct hotel hotelData[TOTALHOTELS], double charge);

int main()
{
	struct hotel hotelData[TOTALHOTELS] =
		{
			{"Puri Hotel", "Puri", 'A', 5000.00, 50},
			{"Mayfair", "Puri", 'A', 9400.00, 200},
			{"Mandakiki Resort", "Bhubaneswar", 'B', 2500.00, 30},
			{"Village Fair", "Cuttack", 'A', 6000.00, 100},
			{"Jankin Palace", "Bhubaneswar", 'C', 1600.00, 35}};
	printByCharge(hotelData, 'A');
	printLessThanCharge(hotelData, 5400.00);
	return (0);
}

void printByCharge(struct hotel hotelData[TOTALHOTELS], char grade)
{
	struct hotel temp;
	for (int i = 1; i < TOTALHOTELS; i += 1)
	{
		for (int j = 1; j < TOTALHOTELS; j += 1)
		{
			if (hotelData[j].avgRoomCharge < hotelData[j - 1].avgRoomCharge)
			{
				temp = hotelData[j];
				hotelData[j] = hotelData[j - 1];
				hotelData[j - 1] = temp;
			}
		}
	}
	printf("[A]\n");
	for (int k = 0; k < TOTALHOTELS; k += 1)
	{
		if (hotelData[k].grade == grade)
		{
			printf("%-20s%-20s%-5c%-15.2lf%-10d\n", hotelData[k].name, hotelData[k].address, hotelData[k].grade, hotelData[k].avgRoomCharge, hotelData[k].totalRooms);
		}
	}
}

void printLessThanCharge(struct hotel hotelData[TOTALHOTELS], double charge)
{
	printf("\n[B]\n");
	for (int k = 0; k < TOTALHOTELS; k += 1)
	{
		if (hotelData[k].avgRoomCharge < charge)
		{
			printf("%-20s%-20s%-5c%-15.2lf%-10d\n", hotelData[k].name, hotelData[k].address, hotelData[k].grade, hotelData[k].avgRoomCharge, hotelData[k].totalRooms);
		}
	}
}