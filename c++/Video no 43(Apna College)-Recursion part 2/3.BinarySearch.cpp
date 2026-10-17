#include<iostream>
#include<vector>
using namespace std;
int binSearch(vector<int>&nums,int target,int start,int end)      
{
    if(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            return binSearch(nums,target,start,mid-1);
        }
        else
        {
            return binSearch(nums,target,mid+1,end);
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={2,4,5,6,8,12,41};                       //Not possible for unsorted array.
    sort(nums.begin(),nums.end());
    for(int val:nums)
    {
        cout<<val<<" ";
    }
    int target;
    cout<<"Enter the number you wanna search:";
    cin>>target;

    cout<<target<<" found at index "<<binSearch(nums,target,0,nums.size()-1)<<endl;

}