#include <stdio.h>
#include <stdlib.h>

struct Node{
int data;
struct Node *next;
};

void printList(struct Node* head){

  struct Node *temp = head;

  while(temp){
    printf("%d -> ",temp->data);
    temp=temp->next;
  }
  printf("NULL");
}

int main(){
int arr[] = {1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
struct Node node[n];
for(int i= 0;i<n;i++){
    node[i].data = arr[i];
    node[i].next=NULL;
    if(i>0){
       node[i-1].next = &node[i];
    }
}

struct Node *head=node;
printList(head);
getch();
}
