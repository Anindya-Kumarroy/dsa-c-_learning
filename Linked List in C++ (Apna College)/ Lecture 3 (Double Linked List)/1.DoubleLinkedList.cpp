#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* prev;

node(int val)
{
 data=val;
 next=prev=NULL;
}
};

class doublylist
{
node* head;
node* tail;

public:

doublylist()
{
    head=tail=NULL;
}
//Push_Front!!
void push_front(int val)
{
    node* newNode=new node(val);
    if(head==NULL)
    {
       head=tail=newNode;
    }
    else
    {
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }

}

//Push_Back!!
void push_back(int val)
 {
    node* newNode=new node(val);
    if(head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }
 }
//Pop front
void pop_front()
{
    if(head==NULL)
    {
        cout<<"DLL is empty!\n";
        return;
    }
    node* temp=head;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;
}
//pop_back
void pop_back()
{
if(head==NULL)
    {
        cout<<"DLL is empty!\n";
        return;
    }
    node* temp=tail;
    tail=tail->prev;
    if(tail!=NULL)
    {
        tail->next=NULL;

    }
    temp->prev=NULL;
    delete temp;

}

 void printdll()
    {
   
        node* temp=head;
        while(temp!=NULL)
        {
            cout << temp->data << "<=>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
 

};

//Print Function!!
int main()
{
doublylist dll;
dll.push_front(1);
dll.push_front(2);
dll.push_front(3);
cout<<"After pushing front:\n";
dll.printdll();
dll.push_back(4);
dll.push_back(5);
dll.push_back(6);
cout<<"After pushing back:\n";
dll.printdll();
dll.pop_front();
cout<<"After poping front:\n";
dll.printdll();
dll.pop_back();
cout<<"After poping back:\n";
dll.printdll();
return 0;

}