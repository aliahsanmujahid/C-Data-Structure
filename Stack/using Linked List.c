#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node *next;
};
struct Node *top=NULL;

void push(int x){
struct Node *t;
t=(struct Node*)malloc(sizeof(struct Node));
if(t==NULL)
    printf("Stack Is Full\n");
else{
    t->data=x;
    t->next=top;
    top=t;
}
}
void Display(){
struct Node *p;
p=top;
while(p){
    printf("%d ",p->data);
 p=p->next;
 }
 printf("\n");
}
int main(){
push(10);
push(20);
push(30);
push(30);
push(30);

Display();

}
