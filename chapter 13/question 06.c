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
node *merge(node *list1, node *list2);

int main()
{
	node *listHead1, *listHead2, *listHeadMerged;
	printf("LIST 1\n");
	listHead1 = create(); // Create a linked list
	printf("\nLIST 2\n");
	listHead2 = create(); // Create another linked list
	printf("\nLIST 1\n");
	print(listHead1); // Print the elements of the linked list 1
	printf("\n\nLIST 2\n");
	print(listHead2);							  // Print the elements of the linked list 2
	listHeadMerged = merge(listHead1, listHead2); // Merged both sorted linked lists into another
	printf("\n\nLIST MERGED\n");
	print(listHeadMerged); // Print the elements of the merged linked list
	return (0);
}

// Function to create a linked list from user given elements and return the head
node *create(void)
{
	node *head, *list;
	int num;

	head = (node *)malloc(sizeof(node)); // Creating the list1 node
	list = head;						 // To keep head unmodified for returning

	printf("Enter num : ");
	scanf("%d", &list->num); // Saving value of the list1 node
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

//Function to take the head of a linked list and print all its elements
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

node *merge(node *list1, node *list2)
{
	node *top;
	node *curr;
	if (list1->num < list2->num)
	{
		top = curr = list1;
		list1 = list1->next;
	}
	else
	{
		top = curr = list2;
		list2 = list2->next;
	}
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->num < list2->num)
		{
			curr->next = list1;
			list1 = list1->next;
		}
		else
		{
			curr->next = list2;
			list2 = list2->next;
		}
		curr = curr->next;
	}
	if (list1 != NULL)
	{
		while (list1 != NULL)
		{
			curr->next = list1;
			list1 = list1->next;
			curr = curr->next;
		}
	}
	if (list2 != NULL)
	{
		while (list2 != NULL)
		{
			curr->next = list2;
			list2 = list2->next;
			curr = curr->next;
		}
	}
	return top;
}