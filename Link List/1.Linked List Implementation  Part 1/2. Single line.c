#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node *newNode(int data,struct Node* nextNode){

struct Node *node=(struct Node*)malloc(sizeof(struct Node));
node->data =data;
node->next =nextNode;

return node;
};

struct Node* constructList(){

struct Node* head = newNode(1, newNode(2, newNode(3, NULL)));
return head;

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

