#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>nums,int target)
{
    vector<int>ans;
    int pairsum;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j)
    {
       pairsum = nums[i]+nums[j];
       if(pairsum>target)
       {
        j--;
       }
       else if(pairsum<target)
       {
        i++;
       }
       else
       {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
       }
    }
    return ans;
}
int main()
{
   vector<int>nums={3,4,5,7,8};
   int target=15;
   vector<int>ans=pairsum(nums,target);
   cout<<"Indexes are:"<<ans[0]<<","<<ans[1]<<endl;
   return 0;  
}