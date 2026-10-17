#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<"Address of a = "<<&a<<endl;  // & is used for printing address.
    int * ptr=&a;                       // creating another variable for storing address.
    cout<<"Address of a = "<<ptr<<endl;
    cout<<"Address of ptr = "<<&ptr<<endl;  //printing address for ptr.
}