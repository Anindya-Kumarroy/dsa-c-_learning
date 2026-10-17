//Pointer to Pointer
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* ptr=&a;
    int** ParentPointer= &ptr;
    cout<<&ptr<<endl;
    cout<<ParentPointer<<endl;
    cout<<*&a<<endl;                 //Dereference (Printing value stored in address)
    cout<<*ptr<<endl;
    cout<<*&ptr<<endl;
    cout<<&a<<endl;
    return 0;
}
