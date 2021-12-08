#include <stdio.h>
#include <stdlib.h>

#define MAXCHARS 30

// Defining the structure of a linked list as : node
struct linkedList
{
	char telephoneNum[11];
	char name[MAXCHARS];
	struct linkedList *next;
};
typedef struct linkedList node;

node *create(void);
void print(node *list);
node *insert(node *list, char name[MAXCHARS], char telephoneNum[11]);
node *delete (node *list, char name[MAXCHARS]);

int main()
{
	node *listHead;
	listHead = create();								 // Create a linked list
	listHead = insert(listHead, "Roshan", "7008669470"); // Insert a new data to the linked list
	print(listHead);									 // Print the contents of the linked list
	listHead = delete (listHead, "Roshan");				 // Deletes the inserted daa
	print(listHead);									 // Prints the linked list again
	return (0);
}

// Function to create a linked list from user given elements and return the head
node *create(void)
{
	node *head, *list;
	char telephoneNum[11];

	head = (node *)malloc(sizeof(node)); // Creating the first node
	list = head;						 // To keep head unmodified for returning

	printf("Enter telephone number and name separated by space : ");
	scanf("%s %s", list->telephoneNum, list->name); // Saving value of the first node
	while (1)
	{
		printf("Enter telephone number and name separated by space (-999 to stop) : ");
		scanf("%s%*c", telephoneNum);
		if ((strcmp(telephoneNum, "-999")) == 0) // If user inputs -999, the next value of current node is set to NULL and loop exited
		{
			list->next = NULL;
			break;
		}
		else // For any other value, a new node is created at the next of current node, list ptr shifted to next node, and value of the new node is set
		{
			list->next = (node *)malloc(sizeof(node));
			list = list->next;
			strcpy(list->telephoneNum, telephoneNum);
			scanf("%s", list->name);
		}
	}
	return (head);
}

// Function to take the head of a linked list and print all its elements
void print(node *list)
{
	printf("%-30s%-15s\n", "NAME", "TELEPHONE");
	while (1)
	{
		printf("%-30s%-15s\n", list->name, list->telephoneNum);
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

// Function to take the head of a linked list and customer data, insert the data, and return the header to the modified list
node *insert(node *list, char name[MAXCHARS], char telephoneNum[11])
{
	node *newHead;
	newHead = (node *)malloc(sizeof(node));
	strcpy(newHead->name, name);
	strcpy(newHead->telephoneNum, telephoneNum);
	newHead->next = list; // Node is set at the head node
	return (newHead);
}

node *delete (node *list, char name[MAXCHARS])
{
	node *head;
	head = list;

	if (list->next == NULL) // List is one node long
	{
		printf("Error. This is the only node. Linked list cannot be empty!");
		return (list);
	}

	if (strcmp(list->name, name) == 0) // First node is to be deleted
	{
		return (list->next);
	}

	node *previousNode;
	previousNode = list;
	list = list->next;
	do
	{
		if (strcmp(list->name, name) == 0)
		{
			if (list->next == NULL)
			{
				previousNode->next = NULL;
			}
			else
			{
				previousNode->next = list->next;
			}
			return (head);
		}
		else
		{
			previousNode = list;
			list = list->next;
		}
	} while (list->next != NULL);
}
