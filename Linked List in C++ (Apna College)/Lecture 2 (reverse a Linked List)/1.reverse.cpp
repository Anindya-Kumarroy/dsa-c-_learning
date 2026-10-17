//Written by me! no oops concept!

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head=NULL;
Node* tail=NULL;

void reverseList()
{
    Node* current=head;
    Node* prev=NULL;
    Node* future=NULL;

    tail=head;

    while(current!=NULL)
    {
        future=current->next;
        current->next=prev;
        prev=current;
        current=future;
    }
    head=prev;
}

void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << "NULL" << endl;
}

int main() {
    head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    tail=third;
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    cout << "Linked List: ";
    printList(head); 
    reverseList();
    cout<<"Reverse linked list: ";
    printList(head);
    return 0;
}