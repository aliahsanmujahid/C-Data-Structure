#include <stdio.h>
#include <stdlib.h>

#define N 7

struct Graph{
struct Node *head[N];
};

struct Node{
int dest;
struct Node*next;
};
struct Edge{
int src,dest;
};
struct Graph *createGrph(struct Edge edges[],int n){
unsigned i;
struct Graph *graph = (struct Garph*)malloc(sizeof(struct Graph));
for(i=0;i<N;i++){
    graph->head[i]=NULL;
}
for(i=0;i<n;i++){
    int src = edges[i].src;
    int dest = edges[i].dest;
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest=dest;
    newNode->next=graph->head[src];
    graph->head[src]=newNode;
}
return graph;
};
void printGraph(struct Graph* graph)
{
    int i;
    for (i = 0; i < N; i++)
    {
        // print current vertex and all ts neighbors
        struct Node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("(%d -> %d)\t", i, ptr->dest);
            ptr = ptr->next;
        }

        printf("\n");
    }
}
int main(){
struct Edge edges[]={
{0,1},{1,2},{2,0},{2,1},{2,3},
{3,2},{4,5},{5,4}
};

int n = sizeof(edges)/sizeof(edges[0]);
struct Graph *graph = createGrph(edges,n);
printGraph(graph);

return 0;
}
