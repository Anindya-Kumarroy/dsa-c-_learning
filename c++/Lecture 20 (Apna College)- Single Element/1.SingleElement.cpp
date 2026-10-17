#include<iostream>
#include<vector>
using namespace std;
int findSingle(vector<int>&nums)
{
    int start=1;
    int n=nums.size();
    int end=n-2;
   

    if(n==1)
    {
        return nums[0];
    }
    if(nums[0]!=nums[1])
    return nums[0];
    if(nums[n-1]!=nums[n-2])
    return nums[n-1];

    while(start<=end)
    {
        int mid=start+(end-start)/2;
       
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
        {
            return nums[mid];
        }
        if(mid%2==0)
        {
            if(nums[mid]==nums[mid-1])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else
        {
            if(nums[mid]==nums[mid-1])
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
    vector<int>nums={1,1,2,2,3,3,4,4,7,8,8};
    int result=findSingle(nums);
    cout<<"Single element is : "<<result<<endl;
}