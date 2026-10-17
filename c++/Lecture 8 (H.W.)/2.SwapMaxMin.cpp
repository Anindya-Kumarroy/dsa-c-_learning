#include<iostream>
#include<algorithm>
using namespace std;
void SwapMaxMin(int arr[],int size)
{
int MaxIndex=0;
int MinIndex=0;
int i;
for(i=0;i<size;i++)
{
    if(arr[MaxIndex]<arr[i])
    {
        MaxIndex=i;
    }

}
for(i=0;i<size;i++)
{
    if(arr[MinIndex]>arr[i])
    {
        MinIndex=i;
    }
    
}
swap(arr[MaxIndex],arr[MinIndex]);
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
    cout<<"Before swapping Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    SwapMaxMin(arr,size);
    cout<<"After swapping Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}