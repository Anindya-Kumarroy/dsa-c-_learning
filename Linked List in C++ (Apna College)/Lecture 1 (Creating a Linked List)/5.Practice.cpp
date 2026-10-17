#include<iostream>
using namespace std;

//Class node!
class node
{
public:
int data;
node* next;

node(int val)
{
    data=val;
    next=nullptr;
}

};

//Class List!
class List
{
public:
node* head;
node* tail;

List()
{
    head=tail=nullptr;
}

//1.Push Front function!
void pushfront(int val)
{
node* newNode=new node(val);
if(head==nullptr)
{
    head=tail=newNode;
}
else
{
    newNode->next=head;
    head=newNode;
}

}

//2.pushback
void pushback(int val)
{
    node* newNode=new node(val);
    if(head==nullptr)
    {
        head=tail=newNode;
    }
    else
    {
        tail->next=newNode;
        tail=newNode;
    }
}

//3.Push Index
void pushindex(int val,int idx)
{
    if(idx<1)
    {
        cout<<"Invalid index\n";
        return;
    }
    else if(idx==1)
    {
        pushfront(val);
        return;
    }
    else
    {
        node* temp=head;
        for(int i=1;i<idx-1 && temp!=nullptr;i++)
        {
            temp=temp->next;
            
        }
        if(temp==nullptr)
            {
                cout<<"Invalid position\n";
                return;
            }
        node* newNode=new node(val);
        newNode->next=temp->next;
        temp->next=newNode;
        if(temp==tail)
        {
            tail=newNode;
        }
    }
}

//4.popfront
void popfront()
{
    if(head==nullptr)
    {
        cout<<"Can't pop! list is empty!\n";
        return;
    }
    node* temp=head;
    head=head->next;
    if(head==nullptr)
    {
        tail=nullptr;
    }
    temp->next=nullptr;

    delete temp;
}

//5.pop back
void popback()
{
   if(head==nullptr)
    {
        cout<<"Can't pop! list is empty!\n";
        return;
    }
    if(head==tail)
    {
        delete head;
        head=tail=nullptr;
        return;
    }
    node* temp=head;
    while(temp->next!=tail)
    {
       temp=temp->next;
    }  
    delete tail;
    tail=temp;
    tail->next=nullptr;
    return;
}

//6.popPosition()
void popposition(int pos)
{
    if(head==nullptr)
    {
        cout<<"Can't pop! List is empty!\n";
        return;
    }
    if(pos<1)
    {
        cout<<"Can't pop! Wrong position!\n";
        return;
    }

    if(pos==1)
    {
        popfront();
        return;
    }
    node* temp=head;
    
    for(int i=1;i<pos-1 && temp->next!=nullptr;i++)
    {
      temp=temp->next;
  
    }

    node* x=temp->next;
    if(x==nullptr)
    {
    cout<<"Can't pop! Wrong position!\n";
    return;
    }

    temp->next=x->next;
    if(x==tail)
    {
    tail=temp;
    }
    delete x;

}

//7.Search function
void search(int val)
{
    int idx=1;
    if(head==nullptr)
    {
        cout<<"Not found!\n";
        return;
    }
    node* temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==val)
        {
           cout<<val<<" found at position:"<<idx<<endl;
           return;
        }
        temp=temp->next;
        idx++;
    }
    cout<<"Element not found!\n";
    return;
}

//8.display()
void display()
{
    if(head==nullptr)
    {
        cout<<"Empty list!\n";
        return;
    }
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
    

}
~List()
{
    while(head!=nullptr)
    {
        node* t=head;
        head=head->next;
        delete t;
    }
}

};

int main()
{
List ll;

while(1)

{
    int val;
    int idx;
    int choice;

    cout<<"\n.......Menu.......\n1.Push Front()\n2.Push Back()\n3.Push Index()\n4.Pop Front()\n5.Pop Back()\n6.Pop Position\n7.Search()\n8.Display()\n9.Exit()\n";
    cout<<"Enter your choice between 1-9:\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter value:";
        cin>>val;
        ll.pushfront(val);
        break;
        case 2:
        cout<<"Enter value:";
        cin>>val;
        ll.pushback(val);
        break;
        case 3:
        cout<<"Enter value:";
        cin>>val;
        cout<<"Enter index:";
        cin>>idx;
        ll.pushindex(val,idx);
        break;
        case 4:
        ll.popfront();
        break;
        case 5:
        ll.popback();
        break;
        case 6:
        cout<<"Enter index:";
        cin>>idx;
        ll.popposition(idx);
        break;
        case 7:
        cout<<"Enter value:";
        cin>>val;
        ll.search(val);
        break;
        case 8:
        ll.display();
        break;
        case 9:
        return 0;
        default:
        cout<<"Wrong choice!\n";
        break;

    }
}
}