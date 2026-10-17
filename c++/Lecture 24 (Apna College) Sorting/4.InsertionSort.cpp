#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr,int n)
{
    for(int i=0;i<n;i++)
    {
          cout<<arr[i]<<endl;
    }
}
void sort(vector<int>&arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    print(arr,n);
}
int main()
{
    vector<int>arr={6,3,8,9,4};
    int n=arr.size();
    sort(arr,n);
    return 0;
}