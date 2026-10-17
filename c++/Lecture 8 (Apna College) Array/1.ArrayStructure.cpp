#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int size;
    size=sizeof(arr)/sizeof(int);    //knwoing the size of the array

    cout<<"Enter "<<size<<" elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}


