//Optimized Approach

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   
    vector<int>nums={1,2,3,4};
    int n=nums.size();
    vector<int>ans(n,1);
    
    for(int i=1;i<n;i++)
    {
        ans[i]=nums[i-1]*ans[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix=suffix*nums[i+1];
        ans[i]=ans[i]*suffix;
    }
    for(int i=0;i<n;i++)
    {
         cout<<"Product for index "<<i<<"= "<<ans[i]<<endl;
    }
    return 0;
}