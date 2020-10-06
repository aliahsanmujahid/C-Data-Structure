#include<stdio.h>
struct Node{
int data;
struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;

void enquee(int data){
struct Node *t;
t=(struct Node*)malloc(sizeof(struct Node));
if(t==NULL){
   printf("Heap is Full");
}else{
    t->data=data;
    t->next=NULL;
if(front==NULL){
    front=rear=t;
}else{
rear->next=t;
rear=t;
}

}
}
void dequee(){
struct Node *t;
if(front==NULL){
   printf("Queue is Empty");
}else{
t=front;
front=front->next;
free(t);
}

}
void display(){
    struct Node *temp=front;
while(temp){
  printf("%d ",temp->data);
  temp=temp->next;
}
printf("\n");
}
int main(){
enquee(1);
enquee(2);
enquee(3);
enquee(4);
display();
dequee();
display();
dequee();
display();
}
