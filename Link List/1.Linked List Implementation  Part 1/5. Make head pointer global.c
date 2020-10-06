#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void push(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;

    head = newNode;
}

void constructList(int keys[], int n)
{

    for (int i = n - 1; i >= 0; i--)
        push(keys[i]);
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
	constructList(keys, n);

	printList(head);

	return 0;
}

