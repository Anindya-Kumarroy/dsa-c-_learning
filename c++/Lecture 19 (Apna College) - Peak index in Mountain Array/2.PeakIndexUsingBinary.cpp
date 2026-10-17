#include<iostream>
#include<vector>
using namespace std;
int PeakIndex(vector<int>&arr)
{
    int start=0;
    int end=arr.size()-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            return mid;
        }
        if(arr[mid]>arr[mid+1])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int>arr={2,4,6,8,7,5,3};
    int i=1;
    int result=PeakIndex(arr);
    if(result==-1)
    {
        cout<<"Peak index not found."<<endl;
    }
    else
    {
        cout<<"Peak index found at "<<result<<endl;
    }
    return 0;
}