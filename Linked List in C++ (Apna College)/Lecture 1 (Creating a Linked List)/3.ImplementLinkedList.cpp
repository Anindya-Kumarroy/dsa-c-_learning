#include<iostream>
using namespace std;

//Elements of ll
class Node{
public:
   int data;
   Node* next;


   Node(int val)          //constructor
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

List()                  //constructor
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

//Adding element at last
void push_back(int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }

}

//Deleting from front
void pop_front()
{
    if(head==NULL)
    {
        cout<<"Linked List is already empty!\n";
        return;
    }
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

//Deleting at end!
void pop_back()
{
    if(head==NULL)
    {
        cout<<"Linked List is already empty!\n";
        return;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
}

//inserting at index
void insert(int val,int pos)
{
if(pos<1)
{
    cout<<"Invalid index\n";
    return;
}
if(pos==1)
{
    push_front(val);
    return;
}

Node* temp=head;
for(int i=1;i<pos-1;i++)
{
    temp=temp->next;
    if(temp->next==NULL)
    {
        cout<<"Invalid position!\n";
        return;
    }
}
Node* newNode=new Node(val);
newNode->next=temp->next;
temp->next=newNode;



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

//search!
int search(int value)
{
    int idx=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            return idx;
        }
        temp=temp->next;
        idx++;
    }
    return -1;
}

};

int main()
{
List ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);
ll.push_back(4);
ll.push_back(5);

ll.insert(6,1);
cout<<"Before pop operation your linked list is:\n";
ll.printll();                 //Remember the process!

ll.pop_front();
ll.pop_back();
cout<<"After pop operation your linked list is:\n";
ll.printll();    
cout<<"Found at index:"<<ll.search(4)<<endl;             
return 0;
}