#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
struct Node *root=NULL;
void treecreate(){
struct Node *t,*p;
struct Queue q;
int x;
create(&q,100);
printf("Enter Root Data: ");
scanf("%d",&x);
root=(struct Node*)malloc(sizeof(struct Node));
root->data=x;
root->lchild=root->rchild=NULL;
enqueue(&q,root);
while(!isEmpty(&q)){
    p =dequeue(&q);
    printf("Enter Left Child of %d: ",p->data);
    scanf("%d",&x);
    if(x!=-1){
 t=(struct Node *)malloc(sizeof(struct
Node));
       t->data=x;
       t->lchild=t->rchild=NULL;
       p->lchild=t;
       enqueue(&q,t);
    }
    printf("Enter Left Child of %d: ",p->data);
    scanf("%d",&x);
       if(x!=-1){
 t=(struct Node *)malloc(sizeof(struct
Node));
       t->data=x;
       t->lchild=t->rchild=NULL;
       p->rchild=t;
       enqueue(&q,t);
    }
}
}
void Preorder(struct Node *p)
{
 if(p)
 {
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}
int main(){
treecreate();
Preorder(root);
}
