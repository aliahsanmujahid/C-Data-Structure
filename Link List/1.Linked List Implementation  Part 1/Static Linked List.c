#include<stdio.h>

struct node{

int data ;
struct node *next;

};

void display(struct node *head){
struct node *temp=head;

while(temp){
    printf("%d -> ",temp->data);
    temp=temp->next;
}
printf("NULL");
}

int main(){

struct node e={5,NULL};
struct node d={4,&e};
struct node c={3,&d};
struct node b={2,&c};
struct node a={1,&b};

struct node *head=&a;

display(head);


getch();
}
