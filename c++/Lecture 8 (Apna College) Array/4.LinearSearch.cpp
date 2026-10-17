#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,target,size,pos=-1;
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
    for(i=0;i<size;i++)
    {
        if(target==arr[i])
        {
            pos=i+1;

        }
    }
    cout<<target<<" found at position "<<pos<<endl;

    
}