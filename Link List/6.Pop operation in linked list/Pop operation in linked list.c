#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node *next;
};

void push(struct Node **head,int data){
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=*head;
*head=newNode;
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
struct Node* pop(struct Node** headRef){
if (*headRef == NULL)
        return -1;
    struct Node* head = *headRef;
    struct Node* result = head->data;
    (*headRef) = (*headRef)->next;
    free(head);

    return result;
}
int main(){
int keys[]= {1,2,3,4,5,6};
int n=sizeof(keys)/sizeof(keys[0]);
struct Node * head=NULL;
for(int i=n-1;i>=0;i--){
    push(&head,keys[i]);
}
int i=pop(&head);

int j=pop(&head);
printf("Popped node %d\n",j);
printList(head);

return 0;
}
