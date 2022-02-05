#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a doubly linked list as : node
struct linkedList
{
	int num;
	struct linkedList *next;
	struct linkedList *previous;
};
typedef struct linkedList node;

node *create(void);
void print(node *list);
int getNode(node *list, int relativePos);

int main()
{
	node *listHead;
	int relativePos;
	listHead = create(); // Create a doubly linked list
	print(listHead);	 // Print the elements of the doubly linked list

	printf("\nEnter relative node position from first node : ");
	scanf("%d", &relativePos);
	printf("Value of the node : %d", getNode(listHead, relativePos)); // Locate and write the content of the given node, -999 for insufficient number of elements
	return (0);
}

// Function to create a doubly linked list from user given elements and return the head
node *create(void)
{
	node *head, *list, *previous;
	int num;

	head = (node *)malloc(sizeof(node)); // Creating the first node
	list = head;						 // To keep head unmodified for returning

	printf("Enter num : ");
	scanf("%d", &list->num); // Saving value of the first node
	list->previous = NULL;
	while (1)
	{
		printf("Enter num (-999 to stop) : ");
		scanf("%d", &num);
		if (num == -999) // If user inputs -999, the next value of current node is set to NULL and loop exited
		{
			list->next = NULL;
			break;
		}
		else // For any other value, a new node is created at the next of current node, list ptr shifted to next node, and value of the new node is set
		{
			list->next = (node *)malloc(sizeof(node));
			previous = list;
			list = list->next;
			list->num = num;
			list->previous = previous;
		}
	}
	return (head);
}

//Function to take the head of a doubly linked list and print all its elements
void print(node *list)
{
	printf("Elements : ");
	while (1)
	{
		printf("%d ", list->num);
		if (list->next == NULL) // If next value of current node is NULL, loop is exited
		{
			break;
		}
		else // Otherwise ptr moves to the next node
		{
			list = list->next;
		}
	}
}

int getNode(node *list, int relativePos)
{
	node *head;
	int count = 0, value = list->num; // Setting value here for relativePos = 0
	head = list;
	while (count != relativePos)
	{
		count += 1;
		if (list->next == NULL)
		{
			value = -999;
			break;
		}
		list = list->next;
		value = list->num;
	}
	return (value);
}