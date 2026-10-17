#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int target)
{
int start=0;
int end=arr.size()-1;
while(start<=end)
{
    int mid=start+(end-start)/2;
    if(target<arr[mid])
    {
        end=mid-1;
    }
    else if(target>arr[mid])
    {
        start=mid+1;
    }
    else
    {
        return mid;
    }
   
}
 return -1;
}
int main()
{
    vector<int>arr={3,4,55,66,77};
    int target=66;
    int result=binarysearch(arr,target);
    cout<<target<<" found at index : "<<result<<endl;
    return 0;
}