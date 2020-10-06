#include <stdio.h>
#include <stdlib.h>

// Data Structure to store a linked list node
struct Node
{
	int data;
	struct Node* next;
};


struct Node* newNode(int key)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = key;
	node->next = NULL;

	return node;
}


void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("null");
}

void push(struct Node** head, int data)
{

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;

	newNode->next = *head;

	return newNode;
}


struct Node* appendNode(struct Node** head, int key)
{
	struct Node* current = *head;


	if (current == NULL)
		push(&head, key);
	else
	{

		while (current->next != NULL)
			current = current->next;


		push(&(current->next), key);
	}
	return head;
}


int main(void)
{

	int keys[] = {1, 2, 3, 4};
	int n = sizeof(keys)/sizeof(keys[0]);

	struct Node* head = NULL;

	for (int i = 0; i < n; i++)
		appendNode(&head, keys[i]);

	printList(head);

	return 0;
}
