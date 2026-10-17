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
};
int main()
{
    
    return 0;
}