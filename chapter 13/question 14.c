#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a circular linked list as : node
struct linkedList
{
	int num;
	struct linkedList *next;
};
typedef struct linkedList node;

node *create(void);
int count(node *list);

int main()
{
	node *listHead;
	int relativePos;

	listHead = create();							  // Create a circular linked list
	printf("Total elements : %d\n", count(listHead)); // Count the number of nodes
	return (0);
}

// Function to create a circular linked list from user given elements and return the head
node *create(void)
{
	node *head, *list;
	int num;

	head = (node *)malloc(sizeof(node)); // Creating the first node
	list = head;						 // To keep head unmodified for returning

	printf("Enter num : ");
	scanf("%d", &list->num); // Saving value of the first node
	while (1)
	{
		printf("Enter num (-999 to stop) : ");
		scanf("%d", &num);
		if (num == -999) // If user inputs -999, the next value of current node is set to head and loop exited
		{
			list->next = head;
			break;
		}
		else // For any other value, a new node is created at the next of current node, list ptr shifted to next node, and value of the new node is set
		{
			list->next = (node *)malloc(sizeof(node));
			list = list->next;
			list->num = num;
		}
	}
	return (head);
}

//Function to take the head of a circular linked list and count total elements
int count(node *list)
{
	node *head;
	int count = 0;
	head = list;
	while (1)
	{
		count += 1;				// +1 element
		if (list->next == head) // If next value of current node is head, loop is exited
		{
			break;
		}
		else // Otherwise ptr moves to the next node
		{
			list = list->next;
		}
	}
	return (count);
}