#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,22,33,444};
    int* ptr=arr;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<(*ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
}