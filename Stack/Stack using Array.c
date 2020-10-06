#include <stdio.h>
#include <stdlib.h>
struct Stack{
int size;
int top;
int *s;
};

void Create(struct Stack *st){
printf("Enter Size: ");
scanf("%d",&st->size);
st->top = -1;
st->s = (int *)malloc(st->size*sizeof(int));
}
void Display(struct Stack st){
int i;
for(i=st.top;i>=0;i--){
    printf("%d ",st.s[i]);
}
printf("\n");
}
void push(struct Stack *st,int data){
if(st->top==st->size-1)
    printf("Stack Is Full\n");
else{
    st->top++;
    st->s[st->top]=data;
}
}
int main(){
struct Stack st;
Create(&st);

push(&st,10);
push(&st,20);
push(&st,30);
push(&st,40);
push(&st,50);

Display(st);
}
