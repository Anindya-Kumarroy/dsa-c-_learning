#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int size;
    int i;
    size=sizeof(arr)/sizeof(int);    //knwoing the size of the array

    cout<<"Enter "<<size<<" elements:";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int smallest,largest;
    int pos=0;
    smallest=largest=arr[0];
    for(i=0;i<size;i++)
    {
        if(smallest>arr[i])
        {
            smallest=arr[i];
            pos=i;
        }
    }
    cout<<"Smallest="<<smallest<<" found at "<<pos<<endl;
    pos=0;

    for(i=0;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
            pos=i;
        }
    }

    cout<<"Largest="<<largest<<" Found at "<<pos<<endl;
    
    return 0;
}


