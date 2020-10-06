#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
// এ গুল এমনি
struct Node{
struct Node *lchild;
int data;
struct Node *rchild;
};
struct Queue{
int size;
int front;
int rear;
struct Node **Q;
};
void create(struct Queue *q,int size){
q->size=size;
q->front=q->rear=0;
q->Q=(struct Node**)malloc(size*sizeof(struct Node*));
}
void enqueue(struct Queue *q,struct Node *root){
if((q->rear+1%q->size)==q->front){
printf("Queue Is Empty.");
}else{
q->rear=(q->rear+1)%q->size;
q->Q[q->rear]=root;
}
}
struct Node *dequeue(struct Queue *q){
    struct Node *data;
if(isEmpty(q)){
printf("Queue is Empty");
}else{
q->front = (q->front+1)%q->size;
data=q->Q[q->front];
}
return data;
};
int isEmpty(struct Queue *q){
return q->front==q->rear;
}
#endif // QUEUE_H_INCLUDED
