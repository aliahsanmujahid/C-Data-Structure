#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* newNode(int data, struct Node* nextNode)
{
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;

	node->next = nextNode;

	return node;
}

struct Node* constructList(int keys[], int n)
{
	struct Node* head = NULL, *node = NULL;

	for (int i = n - 1; i >= 0; i--)
	{
		node = newNode(keys[i], node);
		head = node;
	}

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
