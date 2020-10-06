#include <stdio.h>
struct queue{
int size;
int front;
int rear;
int *arr;
};
void create(struct queue *q,int size){
q->size=size;
q->front=q->rear=-1;
q->arr=(int *)malloc(size*sizeof(int));
}
void enqueue(struct queue *q,int data){
if(q->front==q->size-1){
    printf("Queue is Full\n");
}else{
q->rear++;
q->arr[q->rear]=data;
}
}
int dequeue(struct queue *q){
    int x=0;
if(q->front==q->rear){
printf("Queue is Empty");
}else{
  q->front++;
   x=q->arr[q->front];
}
return x;
}
void display(struct queue q){
for(int i=q.front+1;i<=q.rear;i++){
    printf("%d ",q.arr[i]);
}
}
int main(){
struct queue q;
create(&q,5);
enqueue(&q,5);
enqueue(&q,6);
enqueue(&q,7);
printf("%d \n",dequeue(&q));
display(q);
}
