#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int *ptr1;
    int *ptr2=ptr1+2;
    cout<<ptr2-ptr1<<endl;
    return 0;
}