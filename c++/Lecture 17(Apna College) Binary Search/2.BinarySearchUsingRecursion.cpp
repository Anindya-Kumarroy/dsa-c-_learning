#include<iostream>
#include<vector>
using namespace std;
int binsearch(vector<int>&arr,int target,int start,int end)
{
    int mid;
    if(start>end)
    {
        return -1;
    }
    mid=start+(end-start)/2;
    if(target>arr[mid])
    {
      return  binsearch(arr,target,mid+1,end);
    }
    else if(target<arr[mid])
    {
        return binsearch(arr,target,start,mid-1);
    }
    else
    {
    return mid;
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int start=0,end=arr.size()-1;
    int target;
    cout<<"Enter the number you want to search:";
    cin>>target;
    cout<<target<<" found at position "<<binsearch(arr,target,start,end)<<endl;
    return 0;
}