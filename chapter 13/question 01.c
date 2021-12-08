#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a linked list as : node
struct linkedList
{
	int num;
	struct linkedList *next;
};
typedef struct linkedList node;

// Linked list functions
void create(node *head);
void print(node *head);

int main()
{
	node *linkedListHead;
	linkedListHead = (node *)malloc(sizeof(node)); // Creating the first node
	create(linkedListHead);						   // Adding elements to the linked list
	print(linkedListHead);						   // Print all elements

	return (0);
}

// Function which adds user given elements to the linked list
void create(node *head)
{
	node *list;
	list = head; // To keep the head pointer unmodified

	while (1)
	{
		printf("Enter num (Enter -999 to stop) : ");
		scanf("%d", &list->num); // Put the given number into the current node
		if ((list->num) != -999)
		{
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

// Function which prints all the elements of the linked list
void print(node *head)
{
	node *list;
	list = head; // To keep the head pointer unmodified
	printf("Elements : ");
	for (; list->next != NULL;) // Exit the loop when the current node is the last dummy node
	{
		printf("%d ", list->num); // Print the element of the current node
		list = list->next;		  // Change the list node ptr to point to the next node
	}
}