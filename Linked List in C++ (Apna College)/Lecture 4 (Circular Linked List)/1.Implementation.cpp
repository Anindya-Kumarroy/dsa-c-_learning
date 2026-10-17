#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;

node(int val)
{
data=val;
next=NULL;
}
};

class circularlist{
    node* head;
    node* tail;
    public:
    circularlist()
    {
        head=tail=NULL;
        
    }

void insertAtHead(int val)           //1.Insert at head
{
    node* newNode=new node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        tail->next=head;
    }
    else
    {
        newNode->next=head;
        head=newNode;
        tail->next=head;
    }

}

void insertAtTail(int val)          //2.Insert at tail
{
    node* newNode=new node(val);
    if(head==NULL)
    {
        head=tail=newNode;
        tail->next=head;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
        tail->next=head;
    }
}

void deleteHead()
{
if(head==NULL)
{
    return;
}
else if(head==tail)
{
    delete head;
    head=tail=NULL;
}
else
{
node* temp=head;
head=head->next;
tail->next=head;
temp->next=NULL;
delete (temp);
}

}

void deleteTail()           //4.delete tail
{
    if(head==NULL)
    {
        return;
    }
    else if(head==tail)
    {
        delete tail;
        head=tail=NULL;
    }
    else
    {
        node* temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        temp->next=head;
        delete tail;
        tail=temp;
    }
}

void print()                     //printing
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->data<<"->";
    node* temp=head->next;
    while(temp!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<head->data<<endl;
}

};

int main()
{
circularlist cll;
cll.insertAtHead(1);
cll.insertAtHead(2);
cll.insertAtHead(3);
cll.insertAtHead(4);

cll.insertAtTail(9);
cll.insertAtTail(8);
cll.insertAtTail(7);
cll.insertAtTail(6);

cll.deleteHead();
cll.deleteTail();
cll.print();
return 0;
}