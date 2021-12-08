#include <stdio.h>
#include <stdlib.h>

#define MAXCHARS 30

// Defining the structure of a student linked list as : node
struct linkedList
{
	char name[MAXCHARS];
	int age;
	double weight;
	struct linkedList *next;
};
typedef struct linkedList node;

// Linked list functions
void create(node *head);
void print(node *head);
void count(node *head);
node *edit(node *head);

int main()
{
	node *linkedListHead;
	linkedListHead = (node *)malloc(sizeof(node)); // Creating the first node
	create(linkedListHead);						   // Adding students data to the linked list
	print(linkedListHead);						   // Print details of all students
	edit(linkedListHead);						   // Edit details of a specified student and print new details
	count(linkedListHead);						   // Count total students above a given age and weight

	return (0);
}

// Function which adds students data to the linked list
void create(node *head)
{
	node *list;
	list = head; // To keep the head pointer unmodified

	while (1)
	{
		printf("Enter age, weight, name separated by spaces (Enter -999 to stop) : ");
		scanf("%d%*c", &list->age);
		if ((list->age) != -999)
		{
			scanf("%lf %s", &list->weight, list->name);
			list->next = (node *)malloc(sizeof(node)); // Create a new node and set its address to the next attribute of the current node
			list = list->next;						   // Change the list node ptr to point to the next node
		}
		else
		{
			list->next = NULL; // Last dummy node
			break;			   // Exit loop
		}
	}
}

// Function which prints all the students data of the linked list
void print(node *head)
{
	node *list;
	list = head; // To keep the head pointer unmodified
	printf("\n%-20s%-10s%-10s\n", "Name", "Age", "Weight");
	while (list->next != NULL) // Exit the loop when the current node is the last dummy node
	{
		printf("%-20s%-10d%-10.2lf\n", list->name, list->age, list->weight); // Print the data of the current node
		list = list->next;													 // Change the list node ptr to point to the next node
	}
}

// Function which counts total students above a given age and weight
void count(node *head)
{
	node *list;
	int total = 0, age;
	double weight;
	list = head; // To keep the head pointer unmodified

	printf("\nEnter minimum age and weight separated by a space : ");
	scanf("%d %lf", &age, &weight);

	while (list->next != NULL) // Exit the loop when the current node is the last dummy node
	{
		if ((list->age > age) && (list->weight > weight))
		{
			total += 1; // Increase total elements by 1
		}
		list = list->next; // Change the list node ptr to point to the next node
	}

	printf("Total students above %d years of age and %0.2lf weight : %d", age, weight, total);
}

// Function which edits the details of a specified student and print new details
node *edit(node *head)
{
	node *list;
	char name[MAXCHARS];
	int age;
	double weight;
	list = head; // To keep the head pointer unmodified
	printf("\nEnter the student name followed by the new age and weight (space separated) : ");
	scanf("%s %d %lf", name, &age, &weight);
	while (list->next != NULL) // Exit the loop when the current node is the last dummy node
	{
		if (strcmp(list->name, name) == 0) // If student with the name exists, the details are changed, new list printed and function returned
		{
			list->age = age;
			list->weight = weight;
			print(head);
			return (head);
		}
		list = list->next; // Change the list node ptr to point to the next node
	}
	printf("No students named %s found!", name); // Loop ends normally if no students with the given name is found
	return (head);
}