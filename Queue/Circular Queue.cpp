
#include<iostream>;
using namespace std;

class queue{
private:
    int front;
    int rear;
    int size;
    int *arr;
public:
 queue(){front=rear=-1;size=10;arr=new int[size];}
 queue(int size){front=rear=-1;this->size=size;arr=new int[this->size];}
    void enqueue(int x);
    int dequeue();
    void display();
};
void queue::enqueue(int x){
    if(rear==size-1){
       cout<<"Queue is full\n";
    }else{
    rear++;
    arr[rear]=x;
    }
}
int queue::dequeue(){
    int x=-1;
if(front==rear){
  cout<<"Queue is Empty";
}else{
front++;
x=arr[front];
}
}
void queue::display(){
for(int i=front+1;i<=rear;i++){
        cout<<i<<" ";
    cout<<arr[i]<<" ";
}
}
int main(){
queue q(5);
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(30);
q.enqueue(30);
q.enqueue(30);
q.display();
}
