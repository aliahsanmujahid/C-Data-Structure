#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};
void main(){
int i,j,k,nodes;
printf("Enter the Nodes: ");
scanf("%d",&nodes);
struct node *adj[nodes];
for(i=0;i<nodes;i++){
adj[i] = NULL;
}
read_graph(adj,nodes);
print_graph(adj,nodes);
}
void read_graph(struct node *ad[],int no_of_nodes){
struct node *new_node;
int i,j,k,val;
for(int i=0;i<no_of_nodes;i++){
    struct node *last = NULL;
    printf("Enter the Number of neighbours of %d ",i+1);
    scanf("%d",&k);
    for(j=0;j<k;j++){
     printf("Enter the value of %d neighbours of %d ",j+1,i+1);
     scanf("%d",&val);
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node->data=val;
     new_node->next=NULL;
     if(ad[i]==NULL)
        ad[i] = new_node;
     else
        last->next=new_node;
        last = new_node;
    }
}
}
void print_graph(struct node *ad[],int no_of_nodes){
struct node *ptr = NULL;
int i,j;
for(i=0;i<no_of_nodes;i++){
    ptr = ad[i];
    printf("\nThe neighbours of %d are : ",i+1);
    while(ptr!=NULL){
        printf("%d \t",ptr->data);
        ptr=ptr->next;
    }
}
}
