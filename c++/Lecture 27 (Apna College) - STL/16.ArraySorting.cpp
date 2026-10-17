#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,5,3,2,1};

    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}