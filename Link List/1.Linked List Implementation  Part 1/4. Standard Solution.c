#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;

	newNode->next = *head;

	*head = newNode;
}

struct Node* constructList(int keys[], int n)
{
	struct Node* head = NULL;

	for (int i = n - 1; i >= 0; i--)
		push(&head, keys[i]);

	return head;
}

void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("NULL");
}

int main(void)
{

	int keys[] = {1, 2, 3, 4};
	int n = sizeof(keys)/sizeof(keys[0]);
	struct Node* head = constructList(keys, n);

	printList(head);

	return 0;
}
