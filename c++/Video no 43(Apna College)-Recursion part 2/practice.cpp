//Binary Search
#include<iostream>
using namespace std;
int bin(vector<int>nums,int target,int start,int end)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            return bin(nums,target,0,mid-1);
        }
        else 
        {
            return bin(nums,target,mid+1,nums.size()-1);
        }

    }
    return -1;
}
int main()
{
    vector<int>nums={11,22,34,53,78};
    int target;
    cout<<"Enter target:";
    sort(nums.begin(),nums.end());
    cin>>target;
    for(int val:nums)
    {
        cout<<val<<" ";
    }
    cout<<"Found at index:"<<bin(nums,target,0,nums.size()-1)<<endl;

}