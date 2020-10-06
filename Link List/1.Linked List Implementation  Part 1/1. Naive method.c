#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node *newnode(int data){

struct Node *node=(struct Node*)malloc(sizeof(struct Node));
node->data =data;
node->next =NULL;

return node;
};

struct Node* constructList(){

struct Node* first=newnode(1);
struct Node* second=newnode(2);
struct Node* third=newnode(3);


struct Node *head=first;
first->next=second;
second->next=third;

return head;
};

void display(struct Node *head){
struct Node *temp=head;

while(temp){
    printf("%d -> ",temp->data);
    temp=temp->next;
}
printf("NULL");
}

int main(){

struct Node *head=constructList();
display(head);

}
