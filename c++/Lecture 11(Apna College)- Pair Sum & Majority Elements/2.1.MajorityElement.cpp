#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int major(vector<int>&nums)
{
    int n=nums.size();
    //sorting
    sort(nums.begin(),nums.end());
    int count=0,ans=nums[0];
    for(int i=1;i<n;i++)
    {
       if(nums[i]==nums[i-1])
       {
        count++;
       }
       else
       {
        count=1;
        ans=nums[i];
       }
       if(count>n/2)
       {
        return ans;
       }
    }
    return -1;
}
int main()
{
    vector<int>nums={1,1,2,2,4,3,3,4,2,2,2,2,2};   
    int result=major(nums);
    if(result==-1)
    {
        cout<<"Majority element not found."<<endl;
    }
    else
    {
    cout<<"Majority element:"<<result<<endl;
    }
    return 0;
}