#include<iostream>
#include<vector>
using namespace std;
int RotatedSearch(vector<int>&arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    int mid;
    while(start<=end)
    {
       mid=start+(end-start)/2;
          if(arr[mid]==target)
          {
            return mid;
          }

       if(arr[start]<=arr[mid])             //Left Sorted
       {
          if(arr[start]<=target && target<=arr[mid])
          {
            end=mid-1;
          }
          else
          {
            start=mid+1;
          }
       }
       else                                  //Right Sorted
       {
          if(arr[mid]<=target && target<=arr[end])
          {
            start=mid+1;
          }
          else
          {
            end=mid-1;
          }
       }
    }
    return -1;

}
int main()
{
    vector<int>arr={7,8,9,0,1,2,3,4,5,6};
    int target;
    cout<<"Enter target:";
    cin>>target;
    int result=RotatedSearch(arr,target);
    if(result==-1)
    {
        cout<<"Not found"<<endl;
    }
    else
    {
    cout<<target<<" found at index:"<<result<<endl;
    }
    return 0;
}