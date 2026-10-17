#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i+1;
        }
    }
    return -1;
}

int main()
{
    int arr[5];
    int i,target,size;
    size=sizeof(arr)/sizeof(int);
    cout<<"Enter "<< size<<" elements:";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements are:";
    
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number you want to search:";
    cin>>target;
    cout<<target<<" found at position "<<linearsearch(arr,size,target);
    return 0;
}