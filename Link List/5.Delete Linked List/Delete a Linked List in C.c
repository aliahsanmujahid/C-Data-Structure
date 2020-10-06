#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *next;
};
void push(struct Node **head,int data){
struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=*head;
*head=newNode;
}
void printlist(struct Node *head){
struct Node*temp=head;
while(temp){
    printf("%d-> ",temp->data);
    temp=temp->next;
}
printf("Null");
}
void deleteList(struct Node**head){
struct Node *prev = *head;
while(*head){
*head = (*head)->next;
printf("Deleting %d\n",prev->data);
free(prev);
prev = *head;
}
}
int main(){
int keys[] = {1,2,3,4,5,6};
int n= sizeof(keys)/sizeof(keys[0]);
struct Node *head = NULL;
for(int i=n-1;i>=0;i--){
    push(&head,keys[i]);
}
deleteList(&head);
if(head==NULL){
    printf("List Is Deleted\n");
}
printlist(head);
}
