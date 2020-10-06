
#include <stdio.h>
#include <stdlib.h>
#define N 5

struct Node
{
	int data;
	struct Node* next;
};

struct Node node[N];

void printList(struct Node* head)
{
	struct Node* curr = head;
	while (curr)
	{
		printf("%d -> ", curr->data);
		curr = curr->next;
	}
	printf("NULL");
}

struct Node* createStaticList(int arr[])
{
	for (int i = 0; i < N; i++)
	{
		node[i].data = arr[i];
		node[i].next = NULL;

		if (i > 0)
			node[i - 1].next = &node[i];
	}
	return node;
}

int main(void)
{
	int arr[N] = { 1, 2, 3, 4, 5 };
	struct Node* root = createStaticList(arr);

	printList(root);

	return 0;
}
