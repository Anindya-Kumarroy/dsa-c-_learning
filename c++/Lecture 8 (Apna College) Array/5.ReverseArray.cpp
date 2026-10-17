#include<iostream>
using namespace std;
void reverseArray(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[5];
   
    int size=sizeof(arr)/sizeof(int);
    cout<<"Enter "<<size<<" elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArray(arr,size);
    cout<<"Reversed array:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}