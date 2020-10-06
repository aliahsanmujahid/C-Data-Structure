#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *link;
};

class slist
{
public:
    node *head=NULL;
    node *tmp=NULL;
void insert()
{
node *newer=new node;
if(head==NULL){
cout<<"Enter data for node: ";
cin>>newer->data;
newer->link=head;
head=newer;
tmp=newer;
}else{
tmp->link=new node;
tmp=tmp->link;
cout<<"Enter data for node: ";
cin>>tmp->data;
tmp->link=NULL;
}

}
void display()
{

node *temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<"->";
    temp=temp->link;
}
cout<<"NULL"<<endl;
}
};
int main()
{
    slist obj;

 int ch;
    while(ch!=3){

    cout<<"Enter your choice 1. For add \t 2. for display \t 3. for exit Enter: ";
    cin>>ch;
    cout<<endl;
    switch (ch)
    {
    case 1:

        obj.insert();
        break;
    case 2:
     obj.display();
    }}

cout<<endl<<endl<<endl;
system("pause");
}
