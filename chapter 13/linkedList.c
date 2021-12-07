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
int count(node *head);
node *insert(node *head, int insertBefore, int insertValue);
node *delete (node *head, int deleteValue);
node *insertInAscSortedList(node *head, int insertValue);

int main()
{
	node *linkedListHead;
	int toInsert, insertBefore, toDelete;

	linkedListHead = (node *)malloc(sizeof(node)); // Creating the first node
	create(linkedListHead);						   // Adding elements to the linked list

	printf("Enter value to insert : ");
	scanf("%d", &toInsert);
	printf("Enter value of element to insert before (-999 for end) : ");
	scanf("%d", &insertBefore);
	linkedListHead = insert(linkedListHead, insertBefore, toInsert); // Insert a new element
	printf("Total elements : %d\n", count(linkedListHead));			 // Print total elements
	print(linkedListHead);											 // Print all elements

	printf("\nEnter value to insert : ");
	scanf("%d", &toInsert);
	linkedListHead = insertInAscSortedList(linkedListHead, toInsert); // Insert a new element in sorted list
	printf("Total elements : %d\n", count(linkedListHead));			  // Print total elements
	print(linkedListHead);											  // Print all elements

	printf("\nEnter value to delete : ");
	scanf("%d", &toDelete);
	linkedListHead = delete (linkedListHead, toDelete);		// Delete an element
	printf("Total elements : %d\n", count(linkedListHead)); // Print total elements
	print(linkedListHead);									// Print all elements

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
	while (list->next != NULL) // Exit the loop when the current node is the last dummy node
	{
		printf("%d ", list->num); // Print the element of the current node
		list = list->next;		  // Change the list node ptr to point to the next node
	}
}

// Function which counts total elements present in the linked list
int count(node *head)
{
	node *list;
	int total = 0;
	list = head;			   // To keep the head pointer unmodified
	while (list->next != NULL) // Exit the loop when the current node is the last dummy node
	{
		total += 1;		   // Increase total elements by 1
		list = list->next; // Change the list node ptr to point to the next node
	}
	return (total);
}

node *insert(node *head, int insertBefore, int insertValue)
{
	node *new, *list;
	new = (node *)malloc(sizeof(node)); // Creating a new node
	new->num = insertValue;
	if (head->num == insertBefore) // Node to be inserted at the front
	{
		new->next = head;
		head = new;
		return (head);
	}
	else // Node to be inserted in the middle or end (still middle as a dummy node with -999 is used)
	{
		list = head;
		while (list->next != NULL)
		{
			if (list->next->num == insertBefore) // Next is the node to be inserted before
			{
				new->next = list->next; // Next of new node points to the next of the list node
				list->next = new;		// Next of the current list node points to the new node
				break;
			}
			list = list->next; // Move to next node of the list
		}
		return (head);
	}
}

node *delete (node *head, int deleteValue)
{
	node *list, *p;
	list = head;
	if (list->num == deleteValue)
	{
		return (list->next);
	}
	else
	{
		while (list->next != NULL)
		{
			if (list->next->num == deleteValue)
			{
				p = list->next;
				list->next = p->next;
				free(p);
				break;
			}
			list = list->next;
		}
		return (head);
	}
}

node *insertInAscSortedList(node *head, int insertValue)
{
	node *new, *list;
	new = (node *)malloc(sizeof(node)); // Creating a new node
	new->num = insertValue;
	if (head->num >= insertValue) // Node to be inserted at the front
	{
		new->next = head;
		head = new;
		return (head);
	}
	else // Node to be inserted in the middle or end (still middle as a dummy node with -999 is used)
	{
		list = head;
		while (list->next != NULL)
		{
			if ((list->next->num >= insertValue) || list->next->next == NULL) // Next is the node to be inserted before
			{
				new->next = list->next; // Next of new node points to the next of the list node
				list->next = new;		// Next of the current list node points to the new node
				break;
			}
			list = list->next; // Move to next node of the list
		}
		return (head);
	}
}