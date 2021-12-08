#include <stdio.h>
#include <stdlib.h>

// Defining the structure of a linked list as : node
struct linkedList
{
	int num;
	struct linkedList *next;
};
typedef struct linkedList node;

node *create(void);
void print(node *list);
node *reverse(node *list);

int main()
{
	node *listHead;
	listHead = create();		  // Create a linked list
	listHead = reverse(listHead); // Reverse the linked list
	print(listHead);			  // Print the elements of the linked list
	return (0);
}

// Function to create a linked list from user given elements and return the head
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
		if (num == -999) // If user inputs -999, the next value of current node is set to NULL and loop exited
		{
			list->next = NULL;
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

// Function which takes the head of a linked list and prints all its elements
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

// Function which takes the head of a linked list and returns a pointer to head of the reversed list
node *reverse(node *list)
{
	node *previousNode, *currentNode;
	previousNode = list;
	currentNode = list->next;
	list = list->next;
	previousNode->next = NULL; // Make first node as the last node

	while (list != NULL)
	{
		list = list->next;
		currentNode->next = previousNode;
		previousNode = currentNode;
		currentNode = list;
	}

	list = previousNode; // Make last node as the first node
	return (list);
}