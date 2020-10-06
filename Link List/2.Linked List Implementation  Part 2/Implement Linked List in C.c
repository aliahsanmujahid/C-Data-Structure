#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
int next;
};

struct Node* newNode(int key)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = key;
    node->next = NULL;

    return node;
}


void appendNode(struct Node **head,int key){
   struct Node* current = *head;
   struct Node *node=newNode(key);

   if(current==NULL){
      *head=node;
   }
    else{
    while(current->next!=NULL){
           current=current->next;
    }
    current->next=node;
   }
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
