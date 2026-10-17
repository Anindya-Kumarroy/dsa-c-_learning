//Most optimized
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int major(vector<int>&nums)
{
    int n=nums.size();
    int candidate=0;
    int count=0;
    for(int num:nums)
    {
        if(count==0)
        {
            candidate=num;
        }
        if(num==candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
int actualCount=0;
for(int x:nums)
{
    if(x==candidate)
    {
        actualCount++;
    }
    
}
if(actualCount>n/2)
    {
        return candidate;
    }
    else

    return -1;

}
int main()
{
    vector<int>nums={1,1,2,2,3,3,3,3,3};
    int result=major(nums);
    if(result!=-1)
    {
        cout<<"Majority element:"<<result<<endl;

    }
    else
    {
        cout<<"Majority element not found."<<endl;
    }
}