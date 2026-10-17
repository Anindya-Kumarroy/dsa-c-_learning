#include<iostream>
using namespace std;

//Elements of ll
class Node{
public:
   int data;
   Node* next;


   Node(int val)
   {
    data=val;
    next=NULL;
   }

};

//Creation of ll
class List{
Node* head;
Node* tail;

public:

List()
{
    head=tail=NULL;
}


//Adding element at first
void push_front(int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        return;
    }
    else
    {
        newNode->next=head;
        head=newNode;
    }
}

//printing!
void printll()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};

int main()
{
List ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.printll();   
return 0;
}